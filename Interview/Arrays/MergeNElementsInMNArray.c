#include<stdio.h>
#define NA -1
void moveToEnd(int *,int size);

void printArray(int * arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void moveToEnd(int * arr,int size){
    int j=size-1;
    for(int i=size-1;i>=0 &&j>=0;i--){
        if(arr[i]!=NA ){
            arr[j]=arr[i];
            j--;
        }
    }
}

void merge(int *arr1, int *arr2, int m, int n){
    int start2=0;
    int start1=n;
    int k=0;
    while(k< m+n){
        if( (start1<m+n && arr1[start1]<=arr2[start2]) || start2==n){
            arr1[k++]=arr1[start1++];
        }else{
            arr1[k++]=arr2[start2++];
        }
    }

}

int main()
{
   /* Initialize arrays */
   int mPlusN[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
   int N[] = {5, 7, 9, 25};

   int n = sizeof(N) / sizeof(N[0]);
   int m = sizeof(mPlusN) / sizeof(mPlusN[0]) - n;

   /*Move the m elements at the end of mPlusN*/
   moveToEnd(mPlusN, m + n);

   /*Merge N[] into mPlusN[] */
   merge(mPlusN, N, m, n);

   /* Print the resultant mPlusN */
   printArray(mPlusN, m+n);

   return 0;
}
