#include <stdio.h>
#include <math.h>

int main() {
    double area;
    scanf("%lf", &area);

    const double PI = 3.14;
    double radius = sqrt(area / PI);

    printf("%.2lf\n", radius);

}
