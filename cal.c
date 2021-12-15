#include <stdio.h>
int main(){
  int a, b;
  printf("Give two integers: ");
  scanf( "%d%d", &a, &b );
  printf("Addition : %d\n", a + b);
  printf("Subtraction : %d\n", a - b);
  printf("Multiplication : %d\n", a * b);
  printf("Divide : %d\n", a / b);
  printf("Remainder : %d\n", a % b);
}
