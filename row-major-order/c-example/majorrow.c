#include <stdio.h>
#include <stdlib.h>

#define ROWS 20000
#define COLS 20000

void foo() {
  double *A = malloc(ROWS*COLS*sizeof(double));
  typedef double(*matrix)[COLS];

  matrix B = (matrix) A;
  int i, j;

  double sum = 0;
  for (i = 0; i < ROWS; ++i) {
    for (j = 0; j < COLS; ++j) {
      sum += B[i][j];
    }
  }
  printf("Sum: %f\n", sum);
  free(A);
}

int main(void){
  printf("size of matrix %.1f MB\n", ROWS*COLS/1.0e6*(double)sizeof(double));
  foo();
  return 0;
}
