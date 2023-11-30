#include <stdio.h>
#include <string.h>

struct list{
    char name[20];
    int price;
    int sales;
};


void search_brand(struct list a[], int n){
    char brand[20];
    scanf("%s", brand);

    int i;
    for(i=0; i<n; i++){
        if(strcmp(a[i].name, brand) == 0){
            printf("%s %d %d\n", a[i].name, a[i].price, a[i].sales);
        }
    }
}

void print_arr(struct list arr[], int arr_len){
    int i;
    int money = 0;
    for(i=0; i<arr_len; i++){
        printf("%s %d %d\n", arr[i].name, arr[i].price, arr[i].sales);
        money = money + arr[i].sales;
    }

    printf("매출액 총계:%d", money);
}

int main(void){
    struct list item[5];

    int i;
    for(i=0; i<5; i++){
        scanf("%s %d %d", item[i].name, &item[i].price, &item[i].sales);
    }

    int input;
    scanf("%d", &input);
    
    if(input == 1){
        search_brand(item, 5);
    }
    else if(input == 2){
        print_arr(item, 5);
    }
}
