#include<stdio.h>
#define N 6
#define M 21 
int w[6]={1,2,3,4,5,9};
int v[6]={1,3,4,5,8,10};
int maxValue;
int n;    
void dfs(int sum,int c,int step)
{
	if(c>M) //�������� ����� 
	return ;
	if(step==N) { //�Ѿ����n����Ʒ��ѡ�� 
		if(sum>maxValue)	
		maxValue=sum;	// ��������ֵ 
		return ;
	}
	dfs(sum+v[step],c+w[step],step+1);  //ѡ�����Ʒ
	dfs(sum,c,step+1);					//��ѡ�����Ʒ 
}      
int main()
{
	dfs(0,0,0);
printf("%d\n",maxValue);
	return 0;
}
