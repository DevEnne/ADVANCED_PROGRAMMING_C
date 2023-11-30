#include <stdio.h>
#include <string.h>

struct point {
    int x;
    int y;
};

int quadrant(struct point p){

    if(p.x > 0 && p.y > 0){
        printf("사분면=1\n");
    }else if(p.x < 0 && p.y > 0){
        printf("사분면=2\n");
    }else if(p.x < 0 && p.y < 0){
        printf("사분면=3\n");
    }else if(p.x > 0 && p.y < 0){
        printf("사분면=4\n");
    }
}

int main(void){
    struct point p1;

    scanf("%d %d", &p1.x, &p1.y);
    quadrant(p1);

}
