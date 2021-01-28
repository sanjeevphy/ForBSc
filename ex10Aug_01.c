#include <stdio.h>
int main(){
  int a;
  float b;
  b = 10.85;
  a = b ;
  if ( b == 10.85 ) 
    printf( "True.\n" );
  else 
    printf( "False\n" );
  printf( "b = %.8f\n", b );
}
