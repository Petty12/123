#include <stdio.h>
int a[10000];
void swap(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
void FindMinK(int a[],int s,int n,int k)
{
	
	int key=a[s];
	int i=s,j=n;
	while(i!=j){
		while(j>i&&a[j]>=key)
			--j;
		swap(a[i],a[j]);
		while(i<j&&a[i]<=key)
			++i;  
		swap(a[i],a[j]);
	}
	if(n-i+1==k)
		return;
	else if(n-i+1>k)
		FindMinK(a,i+1,n,k);
	else 
	FindMinK(a,s,i-1,k-n+i-1);
}
int main()
{
	int n;
	printf("请输入n个数：");
	scanf("%d",&n);
	printf("请输入要排列的数组:");
	for(int i=0;i<n;++i)
		scanf("%d",&a[i]);
	int k;
	printf("请输入k的值为:");
	scanf("%d",&k);
	FindMinK(a,0,n-1,k);
	for( i=0;i<k;i++)
		printf(" %d",a[i]);
	printf("\n");
	return 0;
}