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

int getLargestNumber(int arr[], int arr_len)
{
    int max = arr[0];
    for (int i = 1; i < arr_len; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void sortDigit(int arr[], int arr_len, int digits)
{
    int output[arr_len]; 
    int i, count[10] = { 0 };
 
    for (i = 0; i < arr_len; i++)
        count[(arr[i] / digits) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (i = arr_len - 1; i >= 0; i--) {
        output[count[(arr[i] / digits) % 10] - 1] = arr[i];
        count[(arr[i] / digits) % 10]--;
    }
 
    for (i = 0; i < arr_len; i++)
        arr[i] = output[i];
}

void radixsort(int inp_array[], int size_array)
{
    int largestNumber = getLargestNumber(inp_array, size_array);
    for (int digit = 1; largestNumber / digit > 0; digit *= 10)
        sortDigit(inp_array,size_array,digit);
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
	radixsort(inp_array,size_array);
    printArray(inp_array,size_array);

}
