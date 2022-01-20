#include<stdio.h>
#include<limits.h>


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

void findFirstLastOccurance(int arr[],int size_arr,int* first_oc,int* last_oc,int key)
{
    for(int i=0;i<size_arr;i++)
    {
        if(arr[i]==key && *first_oc == -1)
        {
            *first_oc = i;
        }
        else if(arr[i]==key && *first_oc != -1)
        {
            *last_oc = i;
        }
    }
}

int main(int argc, char const *argv[])
{

	/* code */
	int size_array,key;
    int first_ocu=-1;
    int last_ocu=-1;
	scanf("%d",&size_array);
	int inp_array[size_array];
	create_array(size_array,inp_array);
    scanf("%d",&key);
   // printArray(inp_array,size_array);
    findFirstLastOccurance(inp_array,size_array,&first_ocu,&last_ocu,key);
   // printArray(inp_array,size_array);
	printf("%d %d",first_ocu,last_ocu);

}