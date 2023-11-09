#include <stdio.h>

int main() {
    signed short num;
    scanf("%hd", &num);

    if (num < 0) {
        num = -num;
    }

    int bit;
    for (int i = 15; i >= 0; i--) {
        bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

}
