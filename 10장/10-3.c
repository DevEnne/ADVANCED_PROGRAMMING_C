#include <stdio.h>

void ary_set(int *v, int n1, int n2, int val){
    int i;
    for(i = n1; i <= n2; i++){
        v[i-1] = val;
    }
}

int main(void){
    int a[] = {1,2,3,4,5,6,7,8,9,10};

    int n1, n2, val;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &val);

    ary_set(a, n1, n2, val);

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
}
