#include <stdio.h>
#include<stdlib.h>

void insertion_sort(int *arr,int n)
{
	int i,j,temp,no_comp=0,no_swap=0;
	for (i=1;i<n;i++)
	{
		temp=*(arr+i);
		j=i-1;
		while (temp<*(arr+j) && j>=0)
		{
			*(arr+j+1)=*(arr+j);
			j--;
			no_swap++;
		}
		no_comp++;
		*(arr+j+1)=temp;
	}
	printf("No. of comparisons: %d\n",no_comp);
	printf("No. of swaps: %d\n",no_swap);
}

int main()
{
	int *arr,n,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    //input
    for (i=0;i<n;i++)
    {
      *(arr+i)=(int) rand();
	}
    //sorting function
	insertion_sort(arr,n);
    //output
	printf("The sorted array is: ");
	for (i=0;i<n;i++)
	{
		printf("%d  ",*(arr+i));
	}

	return 0;
}