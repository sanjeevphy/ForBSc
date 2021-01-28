#include <stdio.h>
int facto(int n){
  if(n == 0 || n == 1) return 1;
  else return n * facto(n-1);
}
int main(){
  int n, f;
  printf( "Give an integer: " );
  scanf( "%d", &n );
  f = facto(n);
  printf( "factorial of %d is %d\n", n, f );
}
