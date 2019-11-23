#include <stdio.h>
#define N 100
void main()
{
	char x[N],y[N];
	int i,j,m,n,t,w,c[N][N],s[N][N];
	printf("请输入序列X:"); scanf("%s",x);
	printf("请输入序列Y:"); scanf("%s",y);
	for(m=0,i=0;x[i]!='\0';i++) m++;
	for(n=0,i=0;y[i]!='\0';i++) n++;
	for(i=0;i<=m;i++) c[i][n]=0;
	for(j=0;j<=n;j++) c[m][j]=0;
	for(i=m-1;i>=0;i--)
		for(j=n-1;j>=0;j--)
			if(x[i]==y[j])
			{
				c[i][j]=c[i+1][j+1]+1;
				s[i][j]=1;
			}
			else
			{
				s[i][j]=0;
				if(c[i][j+1]>c[i+1][j])
					c[i][j]=c[i][j+1];
				else c[i][j]=c[i+1][j];
			}
			printf("最长公共子序列的长度为:%d",c[0][0]);
			printf("\n最长公共子序列为:");
			t=0;w=0;
			for(i=0;i<=m-1;i++)
				for(j=t;j<=n-1;j++)
					if(s[i][j]==1&&c[i][j]==c[0][0]-w)
					{
						printf("%c",x[i]);
						w++;t=j+1;break;
					}
					printf("\n");
}