#include <stdio.h>

int main(void){
    int input_num;
    scanf("%d", &input_num);

    int a[input_num][4];

    int i,k,j;
    for(i=0; i<input_num; i++){
        for(k=0; k<input_num; k++){
            for(j=0; j<4; j++){
                a[k][j] = i;
                i++;
            }
        }
    }
    
    for(i=0; i<input_num; i++){
        if(i%2==0){
            for(k=0; k<4; k++){
                printf("%d ", a[i][k]);
            }
        }
        else{
            for(k=3; k>=0; k--){
                printf("%d ", a[i][k]);
            }
        }
        printf("\n");
    }
}
