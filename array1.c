#include <stdio.h>
int main(){
  int i, n[10]; // n[0], n[1], n[2] ... n[9]
  for(i = 0; i < 10; i++ ){
    printf( "%d\n", n[i] );
  }
  printf( "Loop is over..\n" );
}
