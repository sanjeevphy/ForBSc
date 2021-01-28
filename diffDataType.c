#include <stdio.h>
int main(){
  int a1, a2, a3, a4;
  printf("Give 4 integers: ");
  scanf( "%d%i%o%x", &a1, &a2, &a3, &a4 );
  printf( "With d: %d  %d  %d  %d\n", a1, a2, a3, a4 );
  printf( "With i: %i  %i  %i  %i\n", a1, a2, a3, a4 );
  printf( "With o: %o  %o  %o  %o\n", a1, a2, a3, a4 );
  printf( "With x: %x  %x  %x  %x\n", a1, a2, a3, a4 );
  printf( "With X: %X  %X  %X  %X\n", a1, a2, a3, a4 );
}
