//Actually changes the array by swapping elements
#include<stdio.h>
int main()
{
	int arr[5],i,temp;
	printf("enter the numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<=5/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[4-i];
		arr[4-i]=temp;
	}
	
	printf("reversed array:\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}