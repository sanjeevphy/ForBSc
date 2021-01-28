#include <stdio.h>
int main(){
  long i;
  for(i = 0; i < 1e10; i++)
    if(i % 10000000 == 0) 
      printf( "%ld\n", i );
}
