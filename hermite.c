//  calculate of Hermite polynomial
#include <stdio.h>
int main(){
  int n, m;
  double x, term = 1, sum = 0;
  printf( "Give degree and x: " );
  scanf( "%d%lf", &n, &x );
  if( x > -1e-10 && x < 1e-10 ) { // if x = 0
    if( n % 2 == 0 ) {
      for(m = 1; m <= n/2; m++){
	term *= -(n/2 + m);
      }
      sum = term;
    }
  } else { // if x is not zero
    for( m = 0; m < n; m++ )
      term *= 2 * x; // making term = (2x)^n
    sum = term;
    for(m = 1; m < n/2; m++ ){
      term *= -(n-2*m+1)*(n-2*m+2)/(4*m*x*x);
      sum += term;
    }
    sum += -term / (x * x * n);
  }
  printf( "H(%d, %g) = %g\n", n, x, sum);
}

