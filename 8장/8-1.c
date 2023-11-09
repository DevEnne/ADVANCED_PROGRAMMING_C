#include <stdio.h>

    void printA(int n){
        if(n==1){
            printf("A");
        }
        else{
            printf("A");
            printA(n-1);
        }
    }

int main (void){
    int a;
    scanf("%d", &a);

    int count = a;
    int i,k;

    for(i=a; i>=1; i--){
        printA(i);
        printf("\n");
        count--;
    }


}
