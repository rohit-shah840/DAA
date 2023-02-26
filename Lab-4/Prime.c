#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number to check ? prime number");
    scanf("%d",&n);
    int c=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==1){
        printf("the number is  a prime number : ",n);
    }else{
        printf("The number is not prime number : ",n);
    }
    return 0;
}