#include <stdio.h>
#define NUMBER 10

void swap(int *px, int *py){
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

void sort(int *v, int n){
    int i, j;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(v[i] < v[j]){
                swap(&v[i], &v[j]);
            }
        }
    }
}

int main(void){
    int a[NUMBER];
    int i;

    for(i=0; i<NUMBER; i++){
        scanf("%d", &a[i]);
    }

    sort(a, NUMBER);

    for(i=0; i<NUMBER; i++){
        printf("%d ", a[i]);
    }
}
