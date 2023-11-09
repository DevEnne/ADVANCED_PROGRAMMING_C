#include <stdio.h>
#include <string.h>

int main(void){
    char s[128];
    gets(s);

    int count = strlen(s);
    int i;
    
    printf("%s", s);
    for(i=count-1; i>=0; i--){
        printf("%c", s[i]);
    }
}
