#include <stdio.h>
#include <string.h>

int main(void){
    char a[100];
    gets(a);

    int len = strlen(a);
    int i;

    for(i=0; i<len; i++){
        if(i%2 == 0){
            printf("%c", a[i]);
        }
    }
}
