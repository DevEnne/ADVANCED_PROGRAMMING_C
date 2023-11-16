#include <stdio.h>

int main(void){
    int cm;
    double kg;

    scanf("%d", &cm);

    kg = (cm-100)*0.9;
    printf("%.2lf", kg);
}
