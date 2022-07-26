#include<stdio.h>
int main(){
    int n,k;
    int itr=0;
    printf("Enter the number of n :");
    scanf("%d %d",&n,&k);
    for( int i=1;i<=n;i++){
        for( int j=1;j<=k;j++){
             itr++;
        }
    }
     printf("%d ",itr);
    return 0;
}