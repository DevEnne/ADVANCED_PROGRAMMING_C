#include <stdio.h>
int result(int month, int day){
    int month_day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int result_day = 0;

    for(int i = month; i<=12; i++){
        if(i == month){
            result_day = result_day + month_day[i] + 1 - day;
        }
        else{
            result_day = result_day + month_day[i];
        }
    }

    return result_day;
}


int main(void){
    int m,d;
    scanf("%d월 %d일", &m, &d);
    
    int days = result(m,d);
    printf("%d일 남음", days);
}
