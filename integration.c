#include <stdio.h>
#include <math.h>
float f(float x){ return 2 * x; } // exp(-x*x)
float f1(float a, float b){ return b*b - a*a;}
float trap(float a, float b, int n){
  int i;
  float h, sum, x;
  sum = ( f(a) + f(b) )/ 2;
  x = a;
  h = (b - a ) / n;
  for(i = 1; i < n; i++){
    x += h;
    sum += f(x);
  }
  return sum * h;
}
float simp13(float a, float b, int n){
  int i;
  float h, x, sum;
  sum = 0;
  h = ( b - a ) / n;
  x = a;
  for( i = 0; i < n; i = i + 2 ){
    sum += f(x) + 4 * f(x+h) + f(x+2*h);
    x += 2 * h;
  }
  return sum * h / 3;
}
int main(){
  int n = 6;
  float a, b, t, s, r, et, es;
  printf( "Give limits of integration: " );
  scanf( "%f%f", &a, &b );
  t = trap(a, b, n);
  s = simp13(a, b, n);
  r = f1(a, b);
  et = (r - t) * ( r - t);
  es = ( r - s ) * (r - s);
  if( et < es) printf( "Trapezoidal is better.\n" );
  else if( et > es ) printf( "Simpson 1/3 is better.\n" );
  else printf( "Both methods are same.\n" );
}
