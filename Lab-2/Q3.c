#include<stdio.h>
int main(){
    int n;
    int itr=0;
    printf("Enter the number of n :");
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        for( int j=1;j<=n;j++){
             for( int k=1;k<=n;k++){
             itr++;
             }
        }
    }
    printf("%d ",itr);
    return 0;
}