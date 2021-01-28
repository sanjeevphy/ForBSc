#include <stdio.h>
int main(){
  int i, j, n;
  printf( "Give an integer: " );
  scanf( "%d", &n );
  // Printing upper triangle
  for(i = 0; i < n; i++){
    for( j = 0; j < n - i; j++ ){
      printf( " " );
    }
    for( j = 0; j < 2 * i + 1; j++ ){
      printf( "*" );
    }
    printf( "\n" );
  }

  // Printing lower triangle
  for(i = 0; i <= n; i++){
    for( j = 0; j < i; j++ ){
      printf( " " );
    }
    for( j = 0; j < 2 * n + 1 - 2 * i; j++ ){
      printf( "*" );
    }
    printf( "\n" );
  }
}
