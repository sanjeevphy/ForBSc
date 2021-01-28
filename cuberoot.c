#include <stdio.h>
#include <math.h>
int main(){
  float N, x, term; int i=0;
  printf("Give an integer: ");
  scanf("%f", &N );
  term = 0;
  x = N/3;
  while( x != term ){ // x - term < -1e-10 || x - term > 1e-10
    term = x;
    x = (2*term + N/(term*term))/3; 
    printf( "%d rounds completed.\n", i++ );
  }
  printf( "Cube root of %f is %f\n", N, x );
  printf( "Real cube root %f\n", cbrt(N) );
}
