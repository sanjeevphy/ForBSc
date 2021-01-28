#include <stdio.h>
void fibo(int x){
  int a, i, j, k;
  i = j = 1;
  printf("%d, %d, ", i, j);
  for( a = 0; a < x; a++ ){
    k = i + j;
    i = j;
    j = k;
    printf( "%d, ", k);
  } 
  printf( "\n" );
}
int main(){
  int a;
  printf("Give an integer: ");
  scanf( "%d", &a );
  fibo(a);
}
