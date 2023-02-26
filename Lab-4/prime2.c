#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number to check ? prime number");
    scanf("%d",&n);
    if(n==1){
          printf("the number is not  a prime number : %d",n);
          return 0;
    }
    int c=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c>=1){
        printf("the number is not  a prime number : %d",n);
    }else{
        printf("The number is a prime number : %d ",n);
    }
    return 0;
}