#include<stdio.h>
#define N 6
#define M 21 
int w[6]={1,2,3,4,5,9};
int v[6]={1,3,4,5,8,10};
int maxValue;
int n;    
void dfs(int sum,int c,int step)
{
	if(c>M) //超出重量 则回退 
	return ;
	if(step==N) { //已经完成n件物品的选择 
		if(sum>maxValue)	
		maxValue=sum;	// 更新最大价值 
		return ;
	}
	dfs(sum+v[step],c+w[step],step+1);  //选这件物品
	dfs(sum,c,step+1);					//不选这件物品 
}      
int main()
{
	dfs(0,0,0);
printf("%d\n",maxValue);
	return 0;
}
