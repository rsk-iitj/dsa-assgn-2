#include <stdio.h>

#define ARRAY_SIZE 100


int search_data(int data, int int_arr[],int arr_len)
{
  //  printf("%d",data);

	for(int i=0;i<arr_len;i++)
	{
	   // printf("Value at is is :-%d",int_arr[i]);
		if(int_arr[i]==data)
			return 1;
	}

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

int main(int argc, char const *argv[])
{
	/* code */
	char operation;
	int size_array;
	scanf("%d",&size_array);
	int inp_array[size_array];
	create_array(size_array,inp_array);
	int key;
	scanf("%d",&key);
	int result = search_data(key, inp_array, size_array);
	printf("%d",result);

}
