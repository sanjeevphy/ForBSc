#include <stdio.h>
int main(){
  int i;
  float term, sum, x;
  printf( "Give the value of x: " );
  scanf( "%f", &x );
  sum = term = 1;
  for( i = 1; i < 20; i++ ) {
    term = term * x / i;
    sum = sum + term;
  }
  printf( "result = %f\n", sum );
}
