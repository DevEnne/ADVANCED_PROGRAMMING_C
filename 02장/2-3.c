#include <stdio.h>

int main(void){
    double inch;
    scanf("%lf", &inch);

    double cm;
    cm = inch * 2.54;
    printf("%f inch = %f cm", inch, cm);
}
