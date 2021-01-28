#include <stdio.h>
int main(){
  int i;
  float term, sum, x;
  printf( "Give the value of x: " );
  scanf( "%f", &x );
  sum = term = x;
  for( i = 1; i < 100; i++ ) {
    term = -term * x ;
    sum = sum + term / (i + 1);
  }
  printf( "result = %f\n", sum );
}
