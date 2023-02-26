#include<stdio.h>
#include<stdlib.h>
int main(){
    int  n;
    float capacity;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the capacity : ");
    scanf("%f",&capacity);
    printf("Enter the price of an object : ");
    float price [n];
    for(int i=0;i<n;i++){
        scanf("%f",&price[i]);
    }
    printf("Enter the weight of an object : ");
    int weight[n];
    for(int i=0;i<n;i++){
        scanf("%d",&weight[i]);
    }
    float ratio[n];
    for(int i=0;i<n;i++){
        ratio[i]=price[i]/weight[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ratio[i]<ratio[j]){
                float temp = ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;

                //for object swap 
                int tmp = weight[j];
                weight[j]=weight[i];
                weight[i]=tmp;

                //for price swap
                float t = price[j];
                price[j]= price[i];
                price[i]= t;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%.2f ",ratio[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d ",weight[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%.2f ",price[i]);
    int i=0;
    float sum=0;
    while(capacity!=0){
        if(weight[i]<=capacity){
            capacity-=weight[i];
            sum+=price[i];
            //printf("%.2f %.2f \n",capacity,sum);
        }else{
            sum+=(capacity/weight[i])*price[i];
             //printf("%.2f %.2f \n",capacity,sum);
            capacity=0;
           
        }
        i++;
    }
    printf("\n");
    printf("The maximum profit  is : %.2f ",sum);
    return 0;
}