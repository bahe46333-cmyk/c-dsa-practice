#include<stdio.h>
int main()
{
	int arr[5],i,negative=0,positive=0;
	printf("enter the numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
    
    for(i=0;i<5;i++)
{
	if(arr[i]>0)
	{
		positive++;
	}
	else if(arr[i]<0)
	{
		negative++;
	}
}

printf("%d is positive \n",positive);
printf("%d is negative \n",negative);

return 0;
}