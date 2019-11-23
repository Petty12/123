#include <stdio.h>
#define N 5
#define M 90 
double w[5]={32.5,25.3,37.4,41.3,28.2};
double p[5]={56.2,40.5,70.8,78.4,40.2};
void main()
{
	double x[N],cw,s,h;
	int i,j;
for(i=1;i<=N-1;i++)
for(j=i+1;j<=N;j++)
if(p[i]/w[i]<p[j]/w[j])
{
h=p[i];p[i]=p[j];p[j]=h;
h=w[i];w[i]=w[j];w[j]=h;
}
cw=M;s=0;
for(i=1;i<=N;i++)
{
	if(w[i]>cw) break;
	x[i]=1.0;
	cw=cw-w[i];
	s=s+p[i];
}
x[i]=(double)(cw/w[i]);
s=s+p[i]*x[i];
printf("装包:");
printf("\n所得最大效益为:%7.1f\n",s);
}
