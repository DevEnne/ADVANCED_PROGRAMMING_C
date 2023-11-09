#include <stdio.h>

int main() {
    int m, d, ld = 0;
    scanf("%d월 %d일", &m, &d);

    d -= 1;

    switch (m) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12 :
        d = 31 - d;
        break;
    case 2 :
        d = 28 - d;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        d = 30 - d;
        break;
    }

    switch (m+1) {
    case 1:
    case 2:
        ld += 28;
    case 3:
        ld += 31;
    case 4:
        ld += 30;
    case 5:
        ld += 31;
    case 6:
        ld += 30;
    case 7:
        ld += 31;
    case 8:
        ld += 31;
    case 9:
        ld += 30;
    case 10:
        ld += 31;
    case 11:
        ld += 30;
    case 12:
        ld += 31;
    }

    printf("%d일 남음", d + ld);
}
