#include <stdio.h>
int main(){
  int size, i, j;
  printf( "Give size of square: " );
  scanf( "%d", &size );
  for( i = 0; i < size; i++ ){
      for( j = 0; j < size; j++ ){
        if(i == 0 || i == size -1 ) printf( "* " );
	else if( j == 0 || j == size - 1) printf("* ");
	else printf( "  " );
    }
    printf( "\n" );
  }
  //printf("i=%d and j=%d\n", i, j);
}
