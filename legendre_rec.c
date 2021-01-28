#include <stdio.h>
float p(int n, float x){
  if( n < 0 ) { 
    printf( "Negative indices are not allowed.\n" );
    return 0;
  }
  if(n==0) return 1;
  if(n==1) return x;
  return ((2*n-1)*x*p(n-1, x) - (n-1)*p(n-2, x)) / n;
}
int main(){
  int i;
  float x = 0.5;
  printf( "%4s\t%4s\t%4s\t%6s\t%8s\n", "x", "p0", "p1", "p2", "p3" );
  for( i = -10; i <= 10; i++ ){
    x = i * 0.1;
    printf( "%4.1f\t%4.1f\t%4.1f\t%6.3f\t%8.4f\n", 
		  x,p(0, x),p(1,x),p(2,x),p(3,x) );
  }
}
