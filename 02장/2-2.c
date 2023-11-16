#include <stdio.h>

int main(void){
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int sum;
    float average;
    sum = a+b+c;
    average = sum/3.0;

    printf("sum is %d\n", sum);
    printf("average is %f", average);
}
