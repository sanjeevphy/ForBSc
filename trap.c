#include <stdio.h>
float f(float x){
  return 3*x*x;
}
float f1(float a, float b){ return b*b*b - a*a*a;}
int main(){
  int i, n;
  float a, b, h, sum, x;
  printf("Give limits of integration: ");
  scanf("%f%f", &a, &b);
  printf("Give bin size: ");
  scanf("%f", &h);
  sum = ( f(a) + f(b) )/ 2;
  x = a;
  n = (b - a ) / h;
  printf("n = %d\n", n);
  for(i = 1; i < n; i++){
    x += h;
    sum += f(x);
  }
  printf("Integration by trapezodial rule is %f\n", sum * h);
  printf("Acurate result = %f\n", f1(a,b));
}
