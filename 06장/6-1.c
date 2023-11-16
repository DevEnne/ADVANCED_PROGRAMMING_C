#include <stdio.h>

char max_1(char a, char b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int max_2(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

float max_3(float a, float b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

void max_a(int a, float b) {
    if (a > b) {
        printf("max is %d\n", a);
    }
    else {
        printf("max is %f\n", b);
    }
}

void max_b(char a, int b) {
    if (a > b) {
        printf("max is %c\n", a);
    }
    else {
        printf("max is %d\n", b);
    }
}

int main(void) {
    char a,b;
    int i,j;
    float f1, f2;

    printf("char: ");
    scanf("%c %c", &a, &b);
    
    printf("int: ");
    scanf("%d %d", &i, &j);

    printf("float: ");
    scanf("%f %f", &f1, &f2);

    printf("max char is %c\n", max_1(a,b));
    printf("max int is %d\n", max_2(i,j));
    printf("max float is %f\n", max_3(f1, f2));

    max_a(i, f1);
    max_b(b, j);
}
