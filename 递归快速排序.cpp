#include <stdio.h>
#include <stdlib.h>
#define N 10
int partition(int arr[], int low, int high){
    int key;
    key = arr[low];
    while(low<high){
        while(low <high && arr[high]>= key )
            high--;
        if(low<high)
            arr[low++] = arr[high];
        while( low<high && arr[low]<=key )
            low++;
        if(low<high)
            arr[high--] = arr[low];
    }
    arr[low] = key;
    return low;
}
void quick_sort(int arr[], int start, int end){
    int pos;
    if (start<end){
        pos = partition(arr, start, end);
        quick_sort(arr,start,pos-1);
        quick_sort(arr,pos+1,end);
    }
    return;
}
int main(){
    int arr[N],i;
	for(i=0;i<N;i++)
      arr[i]=rand()%N;
      printf("原来的序列:");
	  for(i=0;i<N;i++)
		  printf( " %d",arr[i]);
    quick_sort(arr,0,N-1);
    printf("\n 排序后 :");
    for(i=0; i<N; i++)
        printf("%d ", arr[i]);
    printf ("\n");
    system("pause");
    return 0;
}
