#include <stdio.h>
#define N 6
#define M 21 
int B[N][M]={0};
int w[6]={0,2,3,4,5,9};
int v[6]={0,3,4,5,8,10};
void knapsack()
{
	int k,C;
	for(k=1;k<N;k++){
		for(C=1;C<M;C++){
			if(w[k]>C){
				B[k][C]=B[k-1][C];
			}
			else{
				int value1=B[k-1][C-w[k]]+v[k];
				int value2=B[k-1][C];
				if(value1>value2){
					B[k][C]=value1;
				}
				else{
					B[k][C]=value2;
				}
			}
		}
	}
}
int main(){
	knapsack();
	printf("%d\n",B[5][20]);
	return 0;
}

