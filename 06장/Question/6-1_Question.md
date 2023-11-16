- (AP2023) 6장 (1) max 함수 (p. 192)
## 문제 설명
아래 main 함수 및 입출력 예시를 보고 ```max_1, max_2, max_3, max_a, max_b``` 함수를 정의하라.
main 함수에서 입력 코드도 작성해야 한다.


## 입출력 예시
아래 입력된 값은 ```x k 8 5 12.56 77.33```이다.
```
char: x k
int: 8 5
float: 12.56 77.33
max char is x
max int is 8
max float is 77.330002
max is 12.560000
max is k
```

## 코드 작성
```c
int main(void) {
  char a,b;
  int i,j;
  float f1, f2;

  //char, int, float 값 scanf를 사용해 입력
  //char:, int:, float:는 printf를 사용해 출력
  // ...

  //아래 출력 코드를 보고 함수를 정의하라.
  printf("max char is %c\n", max_1(a,b));
  printf("max int is %d\n", max_2(i,j));
  printf("max float is %f\n", max_3(f1, f2));
  max_a(i, f1); //함수안에서 출력
  max_b(b, j);  //함수안에서 출력
  return 0;
}
```
