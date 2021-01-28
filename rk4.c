// Runge Kutta (RK4) method
#include <stdio.h>
#include <math.h>
float f(float x, float y){ return x+y; }
int main(){
  float x0, y0, k1, k2, k3, k4, y, x, h, xn;
  //printf( "Enter x0, y0, xn and h: " );
  //scanf( "%f%f%f%f", &x0, &y0, &xn, &h );
  //x = x0; y = y0;
  x = x0 = 0; y = y0 = 0; xn = 3; h = 0.1;
  printf( "\nx\t\ty\n" );
  while( x < xn ){
    k1 = h * f(x, y);
    k2 = h * f(x + h / 2, y + k1 / 2 );
    k3 = h * f(x + h / 2, y + k2 / 2 );
    k4 = h * f(x + h, y + k3 );
    y = y + ( k1 + 2 * k2 + 2 * k3 + k4 ) / 6;
    x = x + h;
    printf( "%f\t%f\n", x, y );
  }
}
