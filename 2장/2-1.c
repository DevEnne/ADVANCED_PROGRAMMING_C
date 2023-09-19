#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);

    int b,c,d;
    b = a/100;
    c = (a/10)%10;
    d = a%10;
    
    printf("%d, %d, %d", b,c,d);
}
