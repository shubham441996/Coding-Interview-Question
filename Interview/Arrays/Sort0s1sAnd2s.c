/*Sorting elements 0s, 1s and 2s in an array using naive approach
 *
 */
#include<stdio.h>
#include<stdlib.h>

void printArray(int * arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void segregate(int *arr, int size){
    int count0=0,count1=0,count2=0;

    for(int i=0;i<size;i++ ){
        if(arr[i]==0)
        count0++;
        else if(arr[i]==1)
        count1++;
        else if(arr[i]==2)
        count2++;
    }

    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++)
    arr[i]=1;

    for(int i=count0+count1;i<count0+count1+count2;i++)
    arr[i]=2;
}

int main() {
	int t;
	int size;
	int * arr;
	scanf("%d ",&t);
	while(t--){
	    scanf("%d ",&size);
	    arr=(int*)malloc(sizeof(int)*size);
	    for(int i=0;i<size;i++){
	        scanf("%d ",&arr[i]);
	    }
	    segregate(arr,size);
	    printArray(arr,size);
	    printf("\n");

	}
	return 0;
}

