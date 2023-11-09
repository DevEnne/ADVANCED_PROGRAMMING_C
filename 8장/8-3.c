#define num 30
#include <stdio.h>

int main() {

    char ch, a[num];
    int c = 0;
    int s = 0, b = 0;

    while ( ( ch = getchar()) != '\n') {
        a[c++] = ch;
    }

    a[c] = '\0';

    for ( int i = 0; i < num; i++){
        if (a[i] >= 97 && a[i] <= 122) {
            s += 1;
            
        }

        else if (a[i] >= 65 && a[i] <= 90) {
            b += 1;
        }

        else {
            continue;
        }
    }

    printf("대문자");
    for (int i = 0; i < b; i++) {
        printf("*");
    }
    printf("\n");
    printf("소문자");
    for (int i = 0; i < s; i++) {
        printf("*");
    }


    

}
