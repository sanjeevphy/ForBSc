#include <stdio.h>
int main(){
  int a[10][10];
  int i, j, n = 7;
  for(i = 0; i< n; i++ ){
    for(j =0; j < n ; j++){
      a[i][j] = i*10 + j + 11;
      if( j < i ) printf( " \t" );
      else printf("%d\t", a[i][j]);
    }
    printf( "\n" );
  }
}
