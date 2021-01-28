#include <stdio.h>
int main(){
  float v1, v2, v;
  printf("Give initial values of velocity: ");
  scanf("%f%f", &v1, &v2);
  v = v1 * v1 + v2 * v2;
  printf("Square of total velocity is %f\n", v);
}
