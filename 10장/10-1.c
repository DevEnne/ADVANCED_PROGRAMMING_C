#include <stdio.h>

char grade(int *score){
    if (*score >= 90){
        return 'A';
    }
    else if (*score >=80){
        return 'B';
    }
    else if (*score >= 70){
        return 'C';
    }
    else if (*score >= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}

int main(void){
    int score;
    scanf("%d", &score);

    printf("%c", grade(&score));
}
