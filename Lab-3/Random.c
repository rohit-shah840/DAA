#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       arr[i]=rand()%100;
    }
    int l=arr[0];
    int s=arr[0];
    for(int i=0;i<n;i++){
        if(l<arr[i]){
            l=arr[i];
        }
        if(s>arr[i]){
            s=arr[i];
        }
    }
    printf("The random number in an array is :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe largest is %d and smallest is %d  in an array.",l,s);
    return 0;
}