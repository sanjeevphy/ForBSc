#include <stdio.h>
#include <math.h>
int main(){
  float x;
  printf( "Any input: " );
  scanf( "%f", &x );
  printf( "Square root of %f is %f\n", x, sqrt(x) );
  printf( "Cube root of %f is %f\n", x, cbrt(x) );
  printf( "sine of %f is %f\n", x, sin(x) );
  printf( "Value of pi is %f\n", M_PI );
}
