#include <stdio.h>
#define N 50
void main()
{
	int i,j,c,cw,n,sw,sp,p[N],w[N],g[N][10*N];
	printf("请输入n:"); scanf("%d",&n);
	printf("请输入c:"); scanf("%d",&c);
	for(i=1;i<=n;i++)
	{
		printf("w%d,p%d:",i,i);
		scanf("%d,%d,%d",&w[i],&p[i]);
	}
	for(j=0;j<=c;j++)
		if(j>=w[1]) g[1][j]=p[1];
		else g[1][j]=0;
		for(i=2;i<=n;i++)
			for(j=0;j<=c;j++)
		if(j>=w[i]&&g[i-1][j]<g[i-1][j-w[i]]+p[i])
			g[i][j]=g[i-1][j-w[i]]+p[i];
		else g[i][j]=g[i-1][j];
		cw=c; printf("c=%d\n",c);
		printf("背包所装物品:\n");
		printf("i  w(i)  p(i)\n");
		for(sp=0,sw=0,i=n;i>=2;i--)
			if(g[i][cw]>g[i-1][cw])
			{
				cw-=w[i];sw+=w[i];sp+=p[i];
				printf("%2d   %3d  %3d\n",i,w[i],p[i]);
			}
			if(g[n][c]-sp==p[1])
			{
				sw+=w[i];sp+=p[i];
				printf("%2d  %3d  %3d\n",1,w[1],p[1]);
			}
			printf("w=%d,pmax=%d\n",sw,sp);
}