#include <stdio.h>
int facto(int n){
  int i, fact = 1;
  for(i = 1; i <= n; i++ ){
	  fact *= i;
  }
  return fact;
}
int main(){
  int n, f;
  printf( "Give an integer: " );
  scanf( "%d", &n );
  f = facto(n);
  printf( "factorial of %d is %d\n", n, f );
}
