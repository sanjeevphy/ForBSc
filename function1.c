#include <stdio.h>
int square(int a){ // definition of function
  int b;
  b = a * a;
  return b;
}
int main(){
  int i, j;
  for( i = 0; i < 10; i++ ){
    j = square( i * 0.5 ); // calling function square
    printf( "Square of %d is %d\n", i, j );
  }
}
