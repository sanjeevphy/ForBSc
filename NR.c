// Newton Raphson method
#include <stdio.h>
float f(float x){ return x*x*x - 2*x*x - 4; }
float f1(float x){ return 3*x*x - 4*x; }
int main(){
  float x0, term, err= 1e-4;
  printf( "Give initial root: " );
  scanf( "%f", &x0 );
  do {
    term = f(x0) / f1(x0);
    x0 = x0 -term;
    printf( "f(%f) = %f\n", x0, f(x0) );
  } while( term < -err || term > err );
  printf( "Nearest root is %f\n", x0 );
  printf( "and f(%.9f) = %g\n", x0, f(x0) );
}
