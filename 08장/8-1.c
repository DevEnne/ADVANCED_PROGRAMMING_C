#include <stdio.h>

void printP(int a){
    int i;
    if(a==0){
        return;
    }
    for(i=0; i<a; i++){
        printf("A");
    }
    printf("\n");
    a = a-1;
    printP(a);
}

int main(void){
    int number;
    scanf("%d", &number);

    printP(number);
}
