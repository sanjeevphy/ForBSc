#include <stdio.h>
int main(){
  int n, m = 0;
  printf( "Give an integer: " );
  scanf("%d", &n);
  int n1 = n;
  while(  n != 0 ){
    //printf("%d  ", n % 10 );
    m = m * 10 + n % 10;
    n = n / 10;
  }
  printf( "m= %d and n = %d\n", m, n);
  if( n1 == m ) {
     printf( "Given number is Palindrome.\n" );
  } else {
     printf( "Given number is not Palindrome.\n" );
  }
}
