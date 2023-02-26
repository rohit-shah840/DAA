#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number to check ? prime numberc: ");
    scanf("%d",&n);
    int c=0;
      if(n==1){
          printf("the number is not  a prime number : %d",n);
          return 0;
    }
    int x=sqrt((double)(n));
    //printf("%d\n",x);
    for(int i=2;i<=x;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c>=1){
        printf("the number is  a not prime number : %d ",n);
    }else{
        printf("The number is prime number : %d",n);
    }
    return 0;
}