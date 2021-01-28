#include <stdio.h>
int main(){

label1:
  printf( "Give two integers: " );
  int a, b;

  scanf( "%d%d", &a, &b );
  printf( "Given integers are  %d and %d\n", a, b );

  if( a != b ){
    goto label1;
  }

  printf( "Processs is over.\n" );
  goto label2;
  int c;
  c = a+b;
label2:
  printf( "Addition of given integers: %d\n", c );
}
