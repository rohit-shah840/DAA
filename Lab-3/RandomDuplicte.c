#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int arr[n];
    //for inputs
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    //for display
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int count=0;
    int max=0;
    int index=0;
    //finding the repeted elements
    for(int i=0;i<n-1;i++){
        int x=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]>=0 && arr[j]>=0){
           if(arr[i]==arr[j]){
            arr[j]=-1;
            x++;
              if(max<=x){
                max=x;
                index =i;
              }
            }
        }
        }
        if(x>1)
         count+=x;
       }
    printf("The number of duplicate in array is %d \n" ,count);
    printf("The most of repeating element is  %d  is repeted %d ",arr[index],max);
    return 0;
}