#include<stdio.h>
int main()
{
	int arr[5],i,sum=0;
	float average;
	
	printf("enter the numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	
	average=(float)sum/5;
	printf("%.2f is the average",average);	
	
	return 0;
}