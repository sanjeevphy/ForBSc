// Lagrange interpolation
#include <stdio.h>
int main(){
  int j, k, n;
  float sum, term, x1;
  printf( "Give number of points: " );
  scanf( "%d", &n );
  float x[n], y[n];
  for(j = 0; j < n; j++ ) {
    printf( "Give valies of x%d and y%d: ", j, j );
    scanf( "%f%f", &x[j], &y[j] );
  }
  printf( "Give required value of x: " );
  scanf( "%f", &x1 );
  sum = 0;
  for( j = 0; j < n; j++) {
    term = 1;
    for( k = 0; k < n; k++ ) {
      if( k == j ) continue;
      term *= (x1 - x[k] ) / (x[j] - x[k]);
    }
    sum = sum + y[j] * term;
  }
  printf( "y(%f) = %f\n", x1, sum );
}
