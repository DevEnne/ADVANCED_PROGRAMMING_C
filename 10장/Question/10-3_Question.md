- (AP2023) 10장 (3) 포인터를 이용하여 배열의 특정 범위 위치의 값을 변경
## 문제 설명  10 - 3

배열 `a`가 아래와 같이 초기화되어 있다. 아래 함수를 이용하여 배열의 `n1`번째
데이터부터 `n2`번째 데이터까지를 `val` 값으로 변경한 후 배열 전체를 출력하는
프로그램을 작성한다. `n1, n2, val` 값을 순서대로 입력한다.

```c
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    /* 10개 데이터 초기화 */
void ary_set(int *v, int n1, int n2, int val)
```

## 입력 예시 1
`7 7 35`

## 출력 예시 1
`1 2 3 4 5 6 35 8 9 10`

## 입력 예시 2
`2 5 88`

## 출력 예시 2
`1 88 88 88 88 6 7 8 9 10`

## 입력 예시 3
`1 10 25`

## 출력 예시 3
`25 25 25 25 25 25 25 25 25 25`
