#include <stdio.h>
#include <stdlib.h>
#define S 10
int bubblesont(int a[],int n)
{ int i;
	if(n>=2)
	{
		for(i=0;i<n-1;i++)
		{
			if(a[i]<a[i+1])
            n=a[i];
			a[i]=a[i+1];
			a[i+1]=n;
		}
		bubblesont(a,int (n-1));
		return a[i];
	}
	}
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
bubblesont(a,S);
	  for(i=0;i<S;i++)
		  printf("%d ",a[i]);
	  printf("\n");
}