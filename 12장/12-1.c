#include <stdio.h>
#include <string.h>

void phone_number(char m[], int n){
    int i;
    for(i=0; i<n; i++){
        if(i==3 || i==7){
            printf("-");
        }
        printf("%c", m[i]);
    }
    printf("\n");
}

struct student_info{
    int id;
    char name[20];
    char phone_num[12];
};

int main(void){

    struct student_info s1;

    scanf("%d", &s1.id);
    scanf("%s", s1.name);
    scanf("%s", s1.phone_num);

    printf("%d\n", s1.id);
    printf("%s\n", s1.name);
    phone_number(s1.phone_num, strlen(s1.phone_num));
}
