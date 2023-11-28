#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char a[100];
    gets(a);

    int len = strlen(a);
    int i;

    for(i=0; i<len; i++){
        if(islower(a[i])){
            a[i] = toupper(a[i]);
        }else{
            a[i] = tolower(a[i]);
        }
    }

    printf("%s", a);
    
}
