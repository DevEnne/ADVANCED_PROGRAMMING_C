#include <stdio.h>

int idx_1(int row, int col) {
  return row * 3 + col;
}

void idx_2(int index) {
  int row = index / 3;
  int col = index % 3;
  printf("(%d, %d) ", row, col);
}

void print2x3(int matrix[6]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[idx_1(i, j)]);
    }
    printf("\n");
  }
}

int main(void) {
  int matrix[6];
  // matrix값 입력
  scanf("%d %d %d", matrix + 0, matrix + 1, matrix + 2);
  scanf("%d %d %d", matrix + 3, matrix + 4, matrix + 5);

  printf("\nprint idx_1\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[idx_1(i, j)]);
    }
  }
  printf("\n");

  printf("\nprint2x3\n");
  print2x3(matrix);

  printf("\nprint idx_2\n");
  for (int i = 0; i < 6; i++) {
    idx_2(i);
    printf("\n");
  }
  printf("\n");

  return 0;
}
