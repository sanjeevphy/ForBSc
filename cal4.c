#include <stdio.h>
int cal(int a1, int a2, char c){
  int b;
  if( c == '+' ) b = a1 + a2;
  else if( c == '-' ) b = a1 - a2;
  else if( c == '*' ) b = a1 * a2;
  else if( c == '/' ) b = a1 / a2;
  else printf( "Given operation is not defined.\n" );
  return b;
}
int main(){
  int x, y;
  char c1;
  printf("Give your expression: ");
  scanf("%d%c%d", &x, &c1, &y );
  printf( "result = %d\n", cal(x, y, c1) );
}
