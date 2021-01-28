// Transpose of a matrix
#include <stdio.h>
int main(){
  int i, j, m, n;
  printf("Give dimensions: ");
  scanf("%d%d", &m, &n);
  int a[m][n];
  printf("Give %d elements of matrix: ", m*n);
  for(i=0;i<m;i++){
    for(j=0; j<n; j++){
      scanf("%d", &a[i][j] );
    }
  }
  printf("Original matrix:\n");
  for(i=0;i<m;i++){
    for(j=0; j<n; j++){
      printf("%d\t", a[i][j] );
    }
    printf("\n");
  }
  printf("Transpose matrxi:\n");
  for(i=0;i<n;i++){
    for(j=0; j<m; j++){
      printf("%d\t", a[j][i] );
    }
    printf("\n");
  }
}
