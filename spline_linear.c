// Linear spline interpolation
#include <stdio.h>
int main(){
  int i, j, n;
  float x[10], y[10], xx, yy, min, max, miny, maxy;
  printf("Give number of observed points: ");
  scanf( "%d", &n );
  for(i=0; i<n; i++){
    printf( "Give values of x%d and y%d: ", i, i );
    scanf( "%f%f", &x[i], &y[i] );
  }
  do{
    printf("Give observation point: ");
    scanf("%f", &xx );
    min = max = x[0];
    for( i = 0; i < n; i++){
      if( min < x[i] && x[i] < xx){
        min = x[i];
	miny = y[i];
      }
      if( max > x[i] && x[i] > xx){
        max = x[i];
	maxy = y[i];
      }
    }

    yy = miny + (maxy-miny)/(max-min)*(xx-min);
    printf( "Value from linear spline is %f\n", yy );
    //printf( "Given point is not in range.\n" );
    scanf("%d", &j);
  }while(j != -1 );
}
