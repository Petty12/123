#include<stdio.h>
#include <stdlib.h>
void hebing(int *A, int f, int m, int e){ 
	int temp[100];
	int i,first=f,last=m+1;
	for(i=0;i<(e-first+1)&&f<=m&&last<=e;i++){	
			if(A[f]<=A[last]) {
				temp[i]=A[f];
				f++;
			}
			else {
				temp[i]=A[last];
				last++;
			}
	}
	while(f>m&&last<=e){
		temp[i]=A[last];
		i++;
		last++;
	}
	while(f<=m&&last>e){
		temp[i]=A[f];
		i++;
		f++;
	}
	for(i=0;first<=e;i++,first++){
		A[first]=temp[i];
	}	
}
void pailie(int *a,int f,int e ){
	int mid=(e+f)/2;
	if(f<e){
		pailie(a,f,mid);
		pailie(a,mid+1,e);
		hebing(a,f,mid,e);
	}	
}
void main(){
	int arr[100];
	int n,i;
	printf("输入要排序的数组长度(小于100个）\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
      arr[i]=rand()%n;
      printf("原来的序列:");
	  for(i=0;i<n;i++)
		  printf( " %d",arr[i]);
pailie(arr,0,n-1);
	printf("\n\n排序后的数组元素顺序为：\n");	
	for( i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
