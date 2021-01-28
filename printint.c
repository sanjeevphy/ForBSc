// using the integer conversion specifiers
#include <stdio.h>
int main(){
  printf( "%d\n", 1729 );
  printf( "%i\n", 1729 );
  printf( "%d\n", +1729 ); 
  printf( "%d\n", -1729 ); 
  printf( "%hd\n", 17290 );
  printf( "%ld\n", 1729000000L );
  printf( "%o\n", 1729 );
  printf( "%u\n", 1729 );
  printf( "%u\n", -1729 );
  printf( "%x\n", 1729 );
  printf( "%X\n", 1729 );
}
