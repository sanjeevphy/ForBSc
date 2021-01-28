// Laguerre polynomials using series expansions
#include <stdio.h>
int main(){
  int n, k;
  double x, term, sum;
  printf( "Give degree and value of x: " );
  scanf( "%d%lf", &n, &x );
  int j;
  sum = term = 1;
  for( k = 1; k <= n; k++ ) {
    term *= - (n - k + 1)*x/(k*k);
    sum += term;
  }
  printf( "L(%d, %g) = %g\n", n, x, sum );
}
