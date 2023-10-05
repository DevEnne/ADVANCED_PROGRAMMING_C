#include <stdio.h>

int main(void){
    int input_num;
    printf("10보다 크고 100보다 작은 정수를 입력하세요: ");
    for( ; ; ){
        input_num = 0;
        scanf("%d", &input_num);
        if (input_num > 10 && input_num < 100){
            break;
        }
        else{
            printf("10보다 크고 100보다 작은 정수를 입력하세요: ");
        }
    }

    int i;
    for(i=1; i<=input_num; i++){
        if (i%3 == 0){
            printf("%d ", i);
        }
    }
}
