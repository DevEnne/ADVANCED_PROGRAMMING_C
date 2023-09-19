#include <stdio.h>

int main(void){
    int a,b;
    printf("2개의 정수를 입력하세요.\n");

    printf("정수 1: ");
    scanf("%d", &a);

    printf("정수 2: ");
    scanf("%d", &b);

    printf("이 두 값의 합은 %d입니다.\n", a+b);
    printf("이 두 값의 차는 %d입니다.\n", a-b);
    printf("이 두 값의 곱은 %d입니다.\n", a*b);
    printf("이 두 값의 몫은 %d입니다.\n", a/b);
}
