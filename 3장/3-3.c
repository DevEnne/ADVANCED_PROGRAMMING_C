#include <stdio.h>

int main(void){
    char a;
    int b,c;

    scanf("%c", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a == '+'){
        printf("%d", b+c);
    }
    else if(a == '-'){
        printf("%d", b-c);
    }
    else if(a == '*'){
        printf("%d", b*c);
    }
    else if(a == '/'){
        printf("%d", b/c);
    }
    else if(a == '%'){
        printf("%d", b%c);
    }
}
