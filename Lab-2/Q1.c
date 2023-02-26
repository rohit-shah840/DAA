#include<stdio.h>
int main(){
    int n;
    int itr=0;
    printf("Enter the number of n :");
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        itr++;
    }
    printf("%d ",itr);
    return 0;
}