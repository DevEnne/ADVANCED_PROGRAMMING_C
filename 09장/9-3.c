#include <stdio.h>
#include <string.h>

int main(void){
    char s[127];
    gets(s);

    int count = strlen(s);
    int i;
    
    for(i = 0; i < count; i++){
        if(s[i] == ' '){
            for(int j = i; j < count; j++){
                s[j] = s[j+1];
            }
            count--;
            i--;
        }
    }

    printf("%s", s);
}
