#include <stdio.h>

int main(void){
    int input_num;
    scanf("%d", &input_num);

    int a[input_num][5];
    int b[input_num*5];

    int i,k,j;

    for(i=0; i<input_num; i++){
        for(k=0; k<5; k++){
            scanf("%d", &a[i][k]);
        }
    }

    for ( j = 0; j < input_num*5;j++){
        b[j] = a[j / 5][j % 5];
    }

    int tmp;
    for(i=0; i<input_num*5; i++){
        for(k=0; k<input_num*5; k++){
            if(b[i] > b[k]){
                tmp = b[i];
                b[i] = b[k];
                b[k] = tmp;
            }
        }
    }

    for ( j = 0; j < input_num*5;j++){
        printf("%d ", b[j]);
    }
}
