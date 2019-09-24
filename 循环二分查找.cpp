#include <stdio.h>
#define N 10
int fun(int a[],int size,int p)
{
	int l=0;
	int R=size-1;
	while(l<=R){
		int mid=l+(R-l)/2;
		if(p==a[mid])
			return mid;
		else if(p>a[mid])
			l=mid+1;
		else
			R=mid-1;
	}
	return -1;
}
  int main()
{
	int xx[10],i,p;
 printf("请输入10个数：");
for(i=0;i<10;i++)
 scanf("%d",&xx[i]);  
	printf("输入要查找的关键字: ");
	scanf("%d",&p);
int pos=fun(xx,N-1,p);
	printf("\n");
	if(pos>=0)
		printf("查找成功,该关键字位于数组的第%d个元素!\n",pos+1);
	else
		printf("查找失败!!!\n");
	return 0;
}
