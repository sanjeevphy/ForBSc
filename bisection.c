// Bisection method to solve algebraic and transcendental equations
#include <stdio.h>
float f(float x){ return x*x*x - 2*x*x - 4; }
int main(){
  float a, b, x, err;
  printf( "Give initial roots: " );
  scanf( "%f%f", &a, &b );
  if( f(a) * f(b) > 0 ) {
    printf( "Given initial roots are not suitable.\n" );
  } else if( f(a) == 0 ) {
    printf( "%f is a real root.\n", a );
  } else if( f(b) == 0 ) {
    printf( "%f is a real root.\n", b );
  } else {
    printf( "Give range of required error: " );
    scanf( "%f", &err );
    do {
      x = ( a + b ) / 2;
      if( f(x) * f(a) < 0 ) b = x;
      else if( f(x) * f(b) < 0 ) a = x;
      else {
	printf( "%f is a real root.\n", x );
	return 0;
      }
      printf( "%f   \n", x );
    } while( b - a > err || a - b > err );
  }
  printf( "%.4f is a nearest root.\n", x );
}
