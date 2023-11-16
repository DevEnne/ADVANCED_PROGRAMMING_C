#include <stdio.h>

int main(void){
    int mx[3][3];
    int my[3][3];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mx[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &my[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", mx[i][j] - my[i][j]);
        }
    }

}
