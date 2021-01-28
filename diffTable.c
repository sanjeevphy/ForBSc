// Calculate the difference table of given data
#include <stdio.h>
int main(){
  int i, j, n;
  printf( "Give number of input data points: " );
  scanf( "%d", &n );
  float x[n], y[n][n];
  for(i = 0; i < n; i++ ) {
    printf( "Give values of x%d and y%d: ", i, i );
    scanf( "%f%f", &x[i], &y[i][0] );
  }

  // forward difference
  /*for( j = 1; j < n; j++ ) {
    for( i = 0; i < n - j; i++ ) {
      y[i][j] = y[i+1][j-1] - y[i][j-1];
    }
  }
  for(i = 0; i < n; i++ ){
    printf( "\n%g\t", x[i] );
    for( j = 0; j < n - i ; j++){
      printf( "%.3g\t", y[i][j] );
    }
  }
  puts( "" );i*/

  // backward difference
  for( j = 1; j < n; j++ ) {
    for( i = j; i < n; i++ ) {
      y[i][j] = y[i][j-1] - y[i-1][j-1];
    }
  }
  for(i = 0; i < n; i++ ){
    printf( "\n%g\t", x[i] );
    for( j = 0; j <= i; j++){
      printf( "%g\t", y[i][j] );
    }
  }
  puts( "" );
  
}
