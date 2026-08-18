#include<stdio.h>
int main()
{
	int arr[5],i,key,found;
	printf("enter the elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("enter the number to search:\n");
	scanf("%d",&key);

	for(i=0;i<5;i++)
	{
		if(arr[i]==key)
		{
			found=1;
			break;
		}
		
	}
	
	if(found==1)
	{
		printf("\n %d found at index %d",key,i);
	}
	else
	{
		printf("\n not found");
	}
	return 0;
}