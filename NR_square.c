#include <stdio.h>
int main(){
  float x, temp, n;
  printf( "Give a number: " );
  scanf( "%f", &n );
  temp = 0;
  x = n / 2;
  while( x != temp ) {
    temp = x;
    x = ( temp + n / temp ) / 2;
  }
  printf("The square root of %f is %f\n", n, x);
}

