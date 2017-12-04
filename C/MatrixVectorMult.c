#include <stdio.h>

int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int B[3] = {1,2,3};
int n = 3;

void MatrixVectorMult(int A[n][n], int B[n], int C[n], int n) {
  for (int i = 0; i < n; i++) {
    C[i] = 0;
    for (int j = 0; j < n; j++) {
      C[i] = C[i] + A[i][j] * B[j];
    }
  }
}

void printArray(int C[n], int n) {
  printf("[");
  for (int i = 0; i < n-1; i++) {
    printf("%d, ", C[i]);
  }
  printf("%d]\n", C[n-1]);
}

int main(int argsc, char** argsv) {
  int C[n];
  MatrixVectorMult(A, B, C, n);
  printArray(C, n);
}
