#include <stdio.h>

int main(void){
    int a,b,c;

    scanf("%d", &a);
    if(a>5000000){
        printf("500만원 이하로 금액을 입력해주세요.\n");
    }
    scanf("%d", &b);
    if(b>30){
        printf("30년 이내로 년수를 입력해주세요.");
    }

    printf("%d", a*b*12);
}
