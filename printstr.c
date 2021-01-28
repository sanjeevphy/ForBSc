// Using the character and string conversion specifiers
#include <stdio.h>
int main(){
  char character = 'A';
  char string[] = "This is a string";
  const char *stringPtr = "This is also a string";

  printf( "%c\n", character );
  printf( "%c\n", 'x' );
  printf( "%s\n", "This is direct string" );
  printf( "This is format string without any conversion specifier\n" );
  printf( "%s\n", string );
  printf( "%s\n", stringPtr );
}
  
