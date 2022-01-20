#include <stdio.h>

#define ARRAY_SIZE 100


int binary_search(int data, int int_arr[],int left, int right)
{
  //  printf("%d",data);
  int mid=(left+right)/2;

  if(int_arr[mid]==data)
  	   return 1;

  if(int_arr[mid]>data)
  	return binary_search(data,int_arr,left,mid-1);
  else
  	return binary_search(data,int_arr,mid+1,right);
  return -1;
}


void  create_array(int size_array,int inp_array[])
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


void  bubble_sort(int size_array,int inp_array[])
{


	for(int i=0;i<size_array;i++)
	{
		for(int j=0;j<size_array-i-1;j++)
		{
		    //printf("\narr[j]=%d",inp_array[j]);
		   // printf("\narr[j+1]=%d",inp_array[j+1]);
			if(inp_array[j]>inp_array[j+1])
				swap(&inp_array[j],&inp_array[j+1]);

		}
	}

}

void printArray(int arr[],int arr_len)
{
    for(int i=0;i<arr_len;i++)
        printf(" %d,",arr[i]);

}

int main(int argc, char const *argv[])
{
	/* code */
	char operation;
	int size_array;
	scanf("%d",&size_array);
	int inp_array[size_array];
	create_array(size_array,inp_array);
	bubble_sort(size_array,inp_array);
   // printArray(inp_array,size_array);
	int key;
	scanf("%d",&key);
	int result = binary_search(key, inp_array,0,size_array-1);
	printf("%d",result);

}



