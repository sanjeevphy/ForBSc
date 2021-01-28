// Regula falsi method to solve algebraic and transcendental equations
#include <stdio.h>
float f(float x){ return x*x*x - 2*x*x - 4; }
int main(){
  float a, b, x, x0;
  printf( "Give initial roots: " );
  scanf( "%f%f", &a, &b );
  x = a;
  if( f(a) * f(b) > 0 ) {
    printf( "Given initial roots are not suitable.\n" );
  } else if( f(a) == 0 ) {
    printf( "%f is a real root.\n", a );
  } else if( f(b) == 0 ) {
    printf( "%f is a real root.\n", b );
  } else
    do {
      x0 = x;
      x = ( a * f(b) - b * f(a) ) / ( f(b) - f(a) );
      if( f(x) * f(a) < 0 ) b = x;
      else if( f(x) * f(b) < 0 ) a = x;
      else {
	printf( "%f is a real root.\n", x );
	return 0;
      }
      printf( "%f   %f   %f   \n", a, x, b );
    } while( x - x0 > 1e-5 || x0 - x > 1e-5 );
  printf( "%.4f is a nearest root.\n", x );
}
