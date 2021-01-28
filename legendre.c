// Legendre polynomials using polynomial form
#include <stdio.h>
int main( ) {
  int k, l, j;
  double x, sum, term;
  float fact1, fact2, fact3, fact4;
  //printf( "Give order and x: " );
  //scanf( "%d%lf", &l, &x );
  for( j = -10; j <= 10; j++ ){
    x = j * 0.1;
    printf( "%g\t", x );
    for(l = 0; l <= 3; l++ ){ 
      fact1 = fact2 = fact3 = fact4 = 1;
      for( k = 1; k <= l; k++ ){
        fact1 *= 2; // 2 to the l power
        fact2 *= x; // x to the l power
        fact3 *= k; // factorial of l
      }

      // special calculation for x = 0
      if( x > -1e-10 && x < 1e-10 ) {
        for(k = 1; k <= l/2; k++) {
          fact4 *= k;
          fact1 *= -1;
        }
        sum = l % 2 ? fact1 * 0 : fact3 / (fact1 * fact4 * fact4 );
        //printf( "P(%d, %f) = %f\n", l, x, sum);
	printf("%g\t", sum);
      } else {
      for(k = l+1; k <= 2*l; k++) fact4 *= k;
        sum = term = fact4 * fact2 / fact3;
        for( k = 1; k <= l/2; k++ ) {
          term = - term * (l-2*k+2)*(l-2*k+1)
	    /(2 * k * (2*l-2*k+1) * x * x);
          sum += term;
        }
        printf( "%g\t", sum/fact1);
      }
    }
    printf( "\n" );
  }
}
