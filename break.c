#include <stdio.h>
int main(){
  int i;
  for(i = 1; i < 10; i++){
    printf( "%d\n", i );
    if( i == 5 ) {
      break;
    }
    printf( "Printed a value which is 5\n" );
  }

  printf( "Value outside the loop is %d\n", i );
}
