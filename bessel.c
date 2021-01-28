/*
  Bessel's function using series expansion
*/
#include <stdio.h>
int main(){
  int k, n;
  float x, term, sum;
  printf( "Give subscript and value of x: " );
  scanf( "%d%f", &n, &x );
  term = sum = 1;
  for( k = 1; k <= n; k++ ){
    term = term * (n+k)*(n-k+1) * x / ( 2 * k );
    sum = sum + term;
  }
  printf( "Value of Bessel polynomial is %f\n", sum );
}
