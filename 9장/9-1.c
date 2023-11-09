#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int i = 0;
    char s[9][127]; 

    for (;;) {
        if (i == 9) {
            break;
        }

        scanf("%s", s[i]);

        if (strcmp(s[i], "$END$") == 0) {
            break;
        }
        i++;

    }

    for (int k = 0; k < i; k++) {
        printf("%s\n", s[k]);
    }
}
