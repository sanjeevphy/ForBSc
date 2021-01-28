// Roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
  float a, b, c, x1, x2, d;
  printf( "Give coefficients of quadratic equation: " );
  scanf( "%f%f%f", &a, &b, &c );
  d = b * b - 4 * a * c;
  if( d == 0 ) {
    x1 = x2 = -b / (2 * a);
    printf( "Both roots are same: %g and %g\n",  x1, x2 );
  } else if( d > 0 ){
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    printf( "Roots are real: %g and %g\n", x1, x2 );
  } else {
    x1 = - b / (2 * a);
    x2 = sqrt( - d ) / ( 2 * a);
    printf( "Roots are complex with values:\n" );
    printf( "    %g + %g i\n", x1 , x2  );
    printf( "and %g - %g i\n", x1 , x2  );
  }
}
