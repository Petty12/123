#include <stdio.h>
#include <stdlib.h>
#define S 10
void main()
{
    int i,j,t,a[S];
	for(i=0;i<S;i++)
      a[i]=rand()%S;
      printf("原来的序列:");
	  for(i=0;i<S;i++)
		  printf( " %d",a[i]);
	  printf("\n");
	  for(i=0;i<S;i++)
      for(j=0;j<S-i-1;j++)
		  if(a[j]>a[j+1]){
      t=a[j];
      a[j]=a[j+1];
	  a[j+1]=t;
		  }
      printf("排序后:");
	  for(i=0;i<S;i++)
		  printf("%d ",a[i]);
	  printf("\n");
}
 