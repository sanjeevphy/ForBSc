#include <stdio.h>
int main(){
  int a[10][10], b[10][10], c[10][10];
  int i, j, m, n;
  printf("Give dimensions of matrix: ");
  scanf( "%d%d", &m, &n );
  printf("Give %d elements of matrix A:\n", m*n);
  for(i=0; i<m; i++){
    for(j=0; j< n; j++){
      scanf("%d", &a[i][j]);
    }
  }
  printf("Give %d elements of matrix B:\n", m*n);
  for(i=0; i<m; i++){
    for(j=0; j< n; j++){
      scanf("%d", &b[i][j]);
      c[i][j] = a[i][j]+b[i][j];
    }
  }
  for(i=0; i<m; i++){
    for(j=0; j< n; j++){
      //c[i][j] = a[i][j]+b[i][j];
      printf("%d\t", c[i][j]);
    }
    printf( "\n" );
  }
}
