#include <stdio.h>
float f(float x){ return 3 * x * x; }
int main(){
  int i, n = 6;
  float a, b, h, x, sum;
  printf("Give limits of integration: ");
  scanf( "%f%f", &a, &b );
  sum = 0;
  h = ( b - a ) / n;
  x = a;
  for( i = 0; i < n; i = i + 2 ){
    sum += f(x) + 4 * f(x+h) + f(x+2*h);
    x += 2 * h;
  }
  printf( "Inegration by Simpson 1/3 is %f\n", sum * h / 3 );
  printf( "Real integration: %f\n", b*b*b - a*a*a );
}
// (h/3)[  f(x0) + 4 f(x1) + f(x2) 
//       + f(x2) + 4 f(x3) + f(x4)
//       + f(x4) + 4 f(x5) + f(x6)
//       + ...
//       + f(xn-2)+4 f(xn-1)+f(xn) ]

