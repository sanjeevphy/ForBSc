#include <stdio.h>
int main(){
  int a, b, c;
  printf("Give two integers: ");
  scanf("%d%d%d", &a, &b, &c);
  if ( a > b ) {
    if ( a > c ) {
      printf( "%d is largest.\n", a );
    } else {
      printf( "%d is largest.\n", c );
    }
  } else {
    if ( b > c ) {
      printf( "%d is largest.\n", b );
    } else {
      printf( "%d is largest.\n", c );
    }
  }
  printf( "a = %d, b = %d and c = %d\n", a, b, c );
}

