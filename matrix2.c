#include <stdio.h>
int main(){
  int a[10][10], b[10][10], c[10][10]={0};
  int i, j, k, l, m, n;
  printf("Give dimensions of matrix: ");
  scanf( "%d%d%d", &m, &l, &n );
  printf("Give %d elements of matrix A:\n", m*l);
  for(i=0; i<m; i++){
    for(j=0; j< l; j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(i=0; i<m; i++){
    for(j=0; j< l; j++){
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  printf("Give %d elements of matrix B:\n", l*n);
  for(i=0; i<l; i++){
    for(j=0; j< n; j++){
      scanf("%d", &b[i][j]);
    }
  }
  for(i=0; i<l; i++){
    for(j=0; j< n; j++){
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      c[i][j] = 0;
      for(k=0; k < l; k++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  printf("\nMultiplication of above matrices is:\n");
  for(i=0; i<m; i++){
    for(j=0; j< n; j++){
      //c[i][j] = a[i][j]+b[i][j];
      printf("%d\t", c[i][j]);
    }
    printf( "\n" );
  }
}
