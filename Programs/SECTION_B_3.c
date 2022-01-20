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

void selectionSort(int arr[], int arr_len)
{
    int i, j, index_min;

    for (i = 0; i < arr_len-1; i++)
    {
        index_min = i;
        for (j = i+1; j < arr_len; j++)
          if (arr[j] < arr[index_min])
            index_min = j;
        swap(&arr[index_min], &arr[i]);
    }
}

void printArray(int arr[],int arr_len)
{
    for(int i=0;i<arr_len;i++)
        printf("%d ",arr[i]);

}


int main(int argc, char const *argv[])
{
	/* code */
	char operation;
	int size_array;
	scanf("%d",&size_array);
	int inp_array[size_array];
	create_array(size_array,inp_array);
	selectionSort(inp_array,size_array);
    printArray(inp_array,size_array);

}
