#include <stdio.h>
int main(){
  int a[10][10], tr = 0, row[10]= {0}, col[10]={0};
  int i, j, n;
  printf("Give size of square matrix: ");
  scanf( "%d", &n );
  printf( "Give %d elements of a square matrix: ", n*n );
  for(i=0; i<n; i++){
    for(j=0;j<n; j++){
      scanf("%d", &a[i][j] );
    }
  }
  for(i=0; i<n; i++){
    tr += a[i][i];
    for(j=0;j<n; j++){
      row[i] += a[i][j];
      col[i] += a[j][i];
    }
    printf( "summation of row %d is %d\n", i, row[i] );
    printf( "summation of col %d is %d\n", i, col[i] );
  }
  printf( "Trace of given matrix is %d\n", tr );
}
