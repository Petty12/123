#include<stdio.h>
#define N 10 
int half(int a[],int l,int R,int p)  
{
	if(l<R)
	{	
		int mid=(l+R)/2;     
		if(a[mid]==p)       
			return mid;
		else if(a[mid]>p)     
			return half(a,l,mid-1,p);   
		else                          
			return half(a,mid+1,R,p);   
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
	int pos=half(xx,0,N-1,p);
	printf("\n");
	if(pos>=0)
		printf("查找成功,该关键字位于数组的第%d个元素!\n",pos+1);
	else
		printf("查找失败!!!\n");
	return 0;
}

