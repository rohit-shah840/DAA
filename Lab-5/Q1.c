#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void swap(int *x , int *y){
    int t= *x;
    *x=*y;
    *y=t;
}
void randomNumberInArray(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=rand()%10;
    }
}
void Display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

//haepify funtion
void heapify(int arr[], int n, int i)
{
int largest = i;
int l = 2 * i + 1;
int r = 2 * i + 2;
if (l < n && arr[l] > arr[largest])
largest = l;
if (r < n && arr[r] > arr[largest])
largest = r;
if (largest != i)
{
swap(&arr[i], &arr[largest]);
heapify(arr, n, largest);
}
}

void heapSort(int arr[], int n)
{

for (int i = n / 2 - 1; i >= 0; i--)
heapify(arr, n, i);
for (int i = n - 1; i > 0; i--)
{
swap(&arr[0], &arr[i]);
heapify(arr, i, 0);
}
}

void buildHeap(int arr[], int n)
{
int startIdx = (n / 2) - 1;
for (int i = startIdx; i >= 0; i--)
{
heapify(arr, n,i);
}
}

void deleting(){

}
int main(){
    int key,n,ch;
    int arr[5];
    printf("for exit enter 0 \n");
    printf("for the generating random number and assiagned to an array 1\n");
    printf("for display 2\n");
    printf("for deleting the element 3\n");
    printf("for heap sort function 4\n");
    do{
         printf("Enter the choices :\n");
    scanf("%d",&ch);
    switch(ch){
        case 0:
        printf("Quit\n");
        exit (0);
        break;
        case 1:
        printf("Ente the size of array :\n");
        scanf("%d",&n);
        randomNumberInArray(arr,n);
        break;
        case 2:
        Display(arr,n);
        break;
        case 3:
        printf("Enter the key to be deleted ");
        scanf("%d",&key);
        deleting(arr,key);
        break;
        case 4:
        heapSort(arr,n);
        break;
        defult :
        printf("Invalid choise");
        break;
    }
   }while(ch);
    return 0;
}