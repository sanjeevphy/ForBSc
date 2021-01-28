// Linear fit of data
#include <stdio.h>
int main(){
  int i, n;
  float sumx, sumy, sumxy, sumx2, m, c;
  printf( "Give number of points: " );
  scanf( "%d", &n );
  float x[n], y[n];
  sumx = sumy = sumxy = sumx2 = 0;
  for( i = 0; i < n; i++ ) {
    printf( "Give values of x%d and y%d: ", i, i );
    scanf( "%f%f", &x[i], &y[i] );
    sumx += x[i];
    sumy += y[i];
    sumxy += x[i] * y[i];
    sumx2 += x[i] * x[i];
  }
  m = ( n * sumxy - sumx * sumy ) / ( n * sumx2 - sumx * sumx );
  c = ( sumy - m * sumx ) / n;
  printf( "\nSlope: %f and intercept: %f\n", m, c );
}
