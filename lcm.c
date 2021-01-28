#include <stdio.h>
int main(){
  int n, m, lcm;
  printf( "Give two integers: " );
  scanf( "%d%d", &m, &n );
  for( lcm = m; lcm <= m * n; lcm++ ){
    if( lcm % m == 0 && lcm % n == 0 ) {
      printf( "Least common multiplier is %d\n", lcm );
      printf( "HCF is %d\n", m * n / lcm );
      return 0;
    }
  }
}
