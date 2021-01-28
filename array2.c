#include <stdio.h>
int main(){
  int i, n[10] = {10, 11, 20, 31, 6, 5,7, 14, 100, 50}; 
  for(i = 0; i < 10; i++ ){
    printf( "%d\n", n[i] );
  }
  printf( "Loop is over..\n" );
}
