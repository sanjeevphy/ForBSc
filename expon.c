// Exponential fit of data: y = a exp( b x )
#include <stdio.h>
#include <math.h>
int main(){
  int i, n;
  float sumx, sumy, sumxy, sumx2, b, c, a;
  printf( "Give number of points: " );
  scanf( "%d", &n );
  float x[n], y[n];
  sumx = sumy = sumxy = sumx2 = 0;
  for( i = 0; i < n; i++ ) {
    printf( "Give values of x%d and y%d: ", i, i );
    scanf( "%f%f", &x[i], &y[i] );
    sumx += x[i];
    sumy += log(y[i]);
    sumxy += x[i] * log(y[i]);
    sumx2 += x[i] * x[i];
  }
  b = ( n * sumxy - sumx * sumy ) / ( n * sumx2 - sumx * sumx );
  c = ( sumy - b * sumx ) / n;
  a = exp( c );
  printf( "y = %f exp( %f x)\n", a, b );
}
