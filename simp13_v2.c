#include <stdio.h>
float f(float x){ return 3 * x * x; }
int main(){
  int i, n = 6;
  float a, b, h, x, sum1=0, sum2=0, total;
  printf("Give limits of integration: ");
  scanf( "%f%f", &a, &b );
  h = ( b - a ) / n;
  x = a;
  for( i = 1; i < n; i++ ){ // (h/3)[ f(x0) + f(xn) + 4 {f(x1) + f(x3) + ... + f(xn-1) }
	                      //   + 2 { f(x2) + f(x4) + f(x6) + ... + f(xn-2) } ]
    x += h;
    if(i%2 == 0) sum1 += f(x);
    else sum2 += f(x);
  }
  total = f(a) + f(b) + 2*sum1 + 4*sum2;
  printf( "Inegration by Simpson 1/3 is %f\n", total * h / 3 );
  printf( "Real integration: %f\n", b*b*b - a*a*a );
}
