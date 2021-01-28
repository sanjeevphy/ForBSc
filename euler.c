// Euler method to solve ODE
#include <stdio.h>
float f(float x, float y){ return x + y; }
int main(){
  float x0, y0, delx, x, y, xn;
  printf( "Enter initial values of (x, y): " );
  scanf( "%f%f", &x0, &y0 );
  printf( "Give step size: " );
  scanf( "%f", &delx );
  printf( "Give final point of calculation xn: " );
  scanf( "%f", &xn );
  x = x0; y = y0;
  printf( "\n  x\t  y\n" );
  int i = 0;
  while( x <= xn ) {
    y = y + f( x, y ) * delx;
    x = x + delx; 
    if( ++i % 1000 == 0)
      printf( "%.3f\t%.3f\n", x, y );
  }
}
