#include <stdio.h>

int V[3] = {1,2,3};
int A[3][3] = {{2,3,-1},{1,3,-1},{-1,-1,-1}};
int n = 3;

int SumVertexDegreesList(int V[n], int A[n][n], int n) {
  int d = 0;
  for (int v = 0; v < n; v++) {
    int dv = 0;
    for (int u = 0; u < n; u++) {
      if (A[v][u] != -1) dv = dv + 1;
    }
    d = d + dv;
  }
  return d;
}

int main(int arsc, char** argsv) {
  printf("%d\n", SumVertexDegreesList(V, A, n));
}
