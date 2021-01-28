#include <stdio.h>
int main(){
  int n1, n2, i, j;
  printf( "Give two integers: " );
  scanf( "%d%d", &n1, &n2 );
  for( j = n1; j <= n2; j++ ) {
    for(i = 2; i <= j/2; i++ ){
      if( j % i == 0 ) {
        break;
      }
    }
    if( i > j / 2 ) {
      printf( "%d  ", j );
    }
  }
  printf( "\n" );
}
