#include <stdio.h>

int main(void){
    int num_1 = 0, num_2 = 0;

    scanf("%d", &num_1);
    scanf("%d", &num_2);

    int i, count = 0;
    for(i = 1; i <= num_1; i++){
        if(num_1 % i == 0 && num_2 % i == 0){
            printf("%d ", i);
            count++;
        }
    }

    printf("공약수는 %d개\n", count);
}
