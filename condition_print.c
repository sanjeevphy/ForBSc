#include <stdio.h>
int main(){
  int a;
  a = 1;
  printf( "For a: %d   %d  %d\n", a == 1, a != 1, a < 1 );
  printf( "For a: %d   %d  %d\n", a == a, a == a*a, a < a );
}
