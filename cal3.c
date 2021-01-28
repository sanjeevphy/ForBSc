#include <stdio.h>
int main(){
  int a1, a2, b;
  char c;
  printf("Give your expression: ");
  scanf("%d%c%d", &a1, &c, &a2);
  if( c == '+' ) b = a1 + a2;
  if( c == '-' ) b = a1 - a2;
  if( c == '*' ) b = a1 * a2;
  if( c == '/' ) b = a1 / a2;
  printf("Result is equal to %d\n", b );
  printf("%d a%ca %d\n", a1, c, a2);
}
