#include <stdio.h>
void ins( void ){
  printf( "Give an integer: " );
}
int main(){
  int a;
  ins();
  scanf( "%d", &a );
  printf( "Given number is %d\n", a );
}
