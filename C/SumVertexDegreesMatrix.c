#include <stdio.h>

int V[3] = {1,2,3};
int A[3][3] = {{0,1,1},{1,0,1},{0,0,0}};
int n = 3;

int SumVertexDegreesMatrix(int V[n], int A[n][n], int n) {
  int d = 0;
  for (int v = 0; v < n; v++) {
    int dv = 0;
    for (int u = 0; u < n; u++) {
      dv = dv + A[v][u];
    }
    d = d + dv;
  }
  return d;
}

int main(int arsc, char** argsv) {
  printf("%d\n", SumVertexDegreesMatrix(V, A, n));
}
