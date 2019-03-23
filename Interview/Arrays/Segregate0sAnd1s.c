#include<stdio.h>
#include<stdlib.h>

void printArray(int * arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void segregate(int *arr, int size){
    int j=size-1;
    int i=0;
    while(i<j){
        if(arr[i]==1){
            while(arr[j]!=0 && j>0)
             j--;
          arr[i]=0;
          arr[j]=1;
        }
        i++;
    }
}

// int main() {
// 	int t;
// 	int size;
// 	int * arr;
// 	scanf("%d ",&t);
// 	while(t--){
// 	    scanf("%d ",size);
// 	    arr=(int*)malloc(sizeof(int)*size);
// 	    for(int i=0;i<size;i++){
// 	        scanf("%d ",&arr[i]);
// 	    }
// 	     printArray(arr,size);
// 	    segregate(arr,size);
// 	    printArray(arr,size);
	    
// 	}
// 	return 0;
// }

int main() {
    int arr[]={1,0,0,1,0,1,0,1};
	
	    // printArray(arr,7);
	    segregate(arr,8);
	    printArray(arr,8);
	    
	return 0;
}