#include<stdio.h>
int main()
{
	int arr[5],i,largest,secondlargest;
	printf("enter the numbers:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	largest=arr[0];
	secondlargest=arr[0];
	
	for(i=0;i<5;i++)
	{
		if(arr[i]>largest)
		{
			secondlargest=largest;
			largest=arr[i];
		}
		else if(arr[i]>secondlargest)
		{
			secondlargest=arr[i];
		}
	}
	
	printf("largest number is :%d\n",largest);
	printf("second largest number is :%d\n",secondlargest);
	
	return 0;
}