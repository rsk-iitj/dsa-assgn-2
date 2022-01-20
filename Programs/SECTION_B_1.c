#include <stdio.h>
#include<stdlib.h>

void create_array(int size_array,int inp_array[])
{

	int data;
	for(int i=0;i<size_array;i++)
	{
		//printf("/n Enter the integer value for %d position-:",i);
		scanf(" %d",&data);
		inp_array[i]=data;
	}

}


void swap(int *x, int* y)
{

    int temp = *x;
    *x = *y;
    *y = temp;
}


int partition (int arr[],int left, int right)
{
    int pivot = arr[right];

    int i = (left - 1);

    for(int j =left; j <= right- 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i + 1],&arr[right]);
    return (i + 1);
}

void quickSort(int arr[],int left,int right)
{
    if (left < right)
    {
        int pivot = partition(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}

void printArray(int arr[],int arr_len)
{
    for(int i=0;i<arr_len;i++)
        printf(" %d",arr[i]);

}


int main(int argc, char const *argv[])
{
	/* code */
	char operation;
	int size_array;
	scanf("%d",&size_array);
	int inp_array[size_array];
	create_array(size_array,inp_array);
	quickSort(inp_array,0,size_array-1);
    printArray(inp_array,size_array);

}
