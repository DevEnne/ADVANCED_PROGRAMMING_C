#include <stdio.h>

int main(void){
    int input_num; // 넓이
    scanf("%d", &input_num);

    // 삼각형의 넓이 (밑변 X 높이) / 2
    // 조건 : 밑변의 길이는 높이의 길이보다 크지 않다.

    int a;
    for(a=1; a<=input_num; a++){
        if ((a*a) / 2 > input_num){
            break;
        }
        if((input_num*2) % a != 0){
            continue;
        }
        printf("%d x %d\n", a, (input_num*2)/a);
    }

}
