#include <stdio.h>
int main(){
  int i, j, n[11] = {15, 10, 5, 7, 11, 13, 1, 5, 15, 10};
  printf( "i    n\n" );
  for( i = 0; i < 11; i++ ){
    printf("%2d%5d   ", i, n[i]);

    for( j = 0 ; j < n[i]; j++ ){
      printf( "*" );
    }
    printf("\n");
    
  }
}
