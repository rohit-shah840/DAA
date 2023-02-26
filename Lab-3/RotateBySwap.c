#include<stdio.h>
int SWAP(int *x,int *y){
    *y=*x;
    return *y;
}
int main(){
    int a,b,c;
    printf("Enter the value of a, b & c:");
    scanf("%d %d %d",&a,&b,&c);
    int d = b;
     b=SWAP(&a,&b);
    a=SWAP(&c,&a);
    c=SWAP(&d,&c);
    printf("The value after rotation is A: %d ,B: %d ,c:%d",a,b,c);
    
}