#include <stdio.h>
int fib(int n){
  printf( "Value of input number is %d\n", n );
  if(n == 0 || n == 1) return n;
  else return fib(n-1) + fib(n-2);
}
int power(int a, int b){
  if( b == 0) return 1;
  else return a * power(a, b - 1);
}
int main(){
  int i;
  scanf("%d", &i);
  printf( "%dth number is %d\n", i, fib(i) );  
}
