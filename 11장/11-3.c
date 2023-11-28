#include <stdio.h>
#include <string.h>

int main(void){
    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    char a;
    scanf(" %c", &a);

    char p[100];
    int i, count = 0;


    for(i=0; i<len; i++){
        if(str[i] == a){
            count = i+1;
            break;
        }
    }

    for(i=0; i<count; i++){
        p[i] = str[i];
    }

    p[i] = '\0'; 

    if (strchr(str, a) == NULL){
        printf("NO.");
    }
    else{
        printf("이전문자는 %s입니다.", p);
    }
}
