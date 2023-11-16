#include <stdio.h>

int main(void){
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int middle;
    
    if(a>b){
        if(a>c){
            if(b>c){
                middle = b;
            }
            else{
                middle = c;
            }
        }
        else{
            middle = a;
        }
    }
    if(b>a){
        if(b>c){
            if(a>c){
                middle = a;
            }
            else{
                middle = c;
            }
        }
        else{
            middle = b;
        }
    }
    if(c>a){
        if(c>b){
            if(a>b){
                middle = a;
            }
            else{
                middle = b;
            }
        }
        else{
            middle = c;
        }
    }

    int answer;
    int answer_1, answer_2, answer_3;
    answer_1 = a - middle;
    answer_2 = b - middle;
    answer_3 = c - middle;

    if(answer_1 > answer_2){
        if(answer_1 > answer_3){
            answer = a;
        }
        else{
            answer = c;
        }
    }
    if(answer_2 > answer_1){
        if(answer_2 > answer_3){
            answer = b;
        }
        else{
            answer = c;
        }
    }
    if(answer_3 > answer_1){
        if(answer_3 > answer_2){
            answer = c;
        }
        else{
            answer = b;
        }
    }

    if(answer_1 + answer_2 == 0){
        if(answer_1 > answer_2){
            answer = b;
        }
        else{
            answer = a;
        }
    }
    if(answer_1 + answer_3 == 0){
        if(answer_1 > answer_3){
            answer = c;
        }
        else{
            answer = a;
        }
    }
    if(answer_2 + answer_3 == 0){
        if(answer_2 > answer_3){
            answer = c;
        }
        else{
            answer = b;
        }
    }
    
    printf("%d", answer);
}
