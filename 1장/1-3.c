#include <stdio.h>

int main(void){
    int a,b,c;
    printf("3개의 정수를 입력하세요.\n");

    printf("정수 1: ");
    scanf("%d", &a);

    printf("정수 2: ");
    scanf("%d", &b);

    printf("정수 3: ");
    scanf("%d", &c);

    int y;
    y=a+b-c;

    printf("이 세 값의 계산 결과는 %d입니다.\n", y);
}
