#include<stdio.h>
#include<stdlib.h>
int min(int a,int b){

}
int main(){
    printf("lets begain");
    int n;
    printf("Enter the number of matarix to be multiplied " );
    scanf("%d",&n);
    int arr[n+2];
    //for p values
    printf("Enter the vlaues of p's");
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
    //matrix
    int mat[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=i;k<j;k++){
            if(i==j){
                mat[i][j]=0;
            }else if(i!=j &&   i<=j ){
                mat[i][j]=mat[i][k]+mat[k+1][j]+arr[i-1]*arr[k]*arr[j];
            }else{
                mat[i][j]=-1;
            }
        }    
    }
    }
    //for the print matrix
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}