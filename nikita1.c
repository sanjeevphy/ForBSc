#include<stdio.h>
int main(){
  float a[10][10],b[10][10],f1,f2,f3;
  int i,j,n,k;
  printf("Give matrix dimension:");
  scanf("%d",&n);
  printf("Give %d elements of matrix:\n",n*n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%f",&a[i][j]);
      if(i==j) b[i][j]=1;
      else b[i][j]=0;	
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%g\t",a[i][j]);
    }
    printf("\n");
  }
  //main part
  for(k=0;k<n;k++){
    for(i=0;i<n;i++){
      if(k==i) continue;
      f1=a[i][k]/a[k][k];	
      printf("a%d%d = %g\n", k, i, a[k][i]);
      for(j=0;j<n;j++){
	a[i][j]=a[i][j] - f1*a[k][j];
	b[i][j]=b[i][j] - f1*b[k][j];
      }
      printf("xa%d%d = %g\n", k, i, a[k][i]);
    }
  }
  printf("After changes:\n");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%g\t",a[i][j]);
    }
    printf("\n");
  }
  printf("\n Another matrix:\n");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      b[i][j]/=a[i][i];
      printf("%g\t",b[i][j]);
    }
    printf("\n");
  }
}
