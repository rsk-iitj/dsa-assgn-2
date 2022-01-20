#include<stdio.h>
#include<limits.h>

int findMaxIntArray(int arr[],int len_arr)
{
    int max;
    for(int i=0;i<len_arr;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int returnCost(int a,int b)
{
    int diff;
    if(a>b)
    {
        diff = a-b;
    }
    else
    {
        diff = b-a;
    }

    return diff;
}

int findMinCost(int arr[],int size_arr)
{
    int global_min_cost=INT_MAX;
    int this_min_cost=0;
    int this_num=0;
    int max  = findMaxIntArray(arr,size_arr);
  //  printf("Max of the arr is :%d",max);
    for(int i=1;i<=findMaxIntArray(arr,size_arr);i++)
    {
        this_min_cost=0;
        for(int j=0;j<size_arr;j++)
        {
            this_num = arr[j];
          //  printf("This number is %d",this_num);
            this_min_cost = this_min_cost+returnCost(i,this_num);
            //printf("This minimum cost is %d",this_min_cost);
        }
        if(this_min_cost<global_min_cost)
        {
            global_min_cost = this_min_cost;
        }
    }
    return global_min_cost;
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

void printArray(int arr[],int arr_len)
{
    for(int i=0;i<arr_len;i++)
        printf(" %d,",arr[i]);

}

int main(int argc, char const *argv[])
{
	/* code */
	int size_array;
	scanf("%d",&size_array);
	int inp_array[size_array];
	create_array(size_array,inp_array);
   // printArray(inp_array,size_array);
	int min_cost = findMinCost(inp_array,size_array);
   // printArray(inp_array,size_array);
	printf("%d",min_cost);

}