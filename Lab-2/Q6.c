#include<stdio.h>
int main(){
    int n,k;
    int itr=0;
    printf("Enter the number of n :");
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        for( int j=1;j<=n/2;j++){
             itr++;
        }
    }
    printf("%d ",itr);
    return 0;
}