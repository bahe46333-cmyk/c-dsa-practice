#include<stdio.h>
int main()
{
	int arr[5],i,even=0,odd=0;
	printf("enter the numbers:\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

     for (i=0;i<5;i++)
     {
     	if(arr[i]%2==0)
		 {
     		even++;
     	}
     else
	 {
	 	odd++;
	 }
	 }

printf("%d is even\n",even);
printf("%d is odd\n",odd);


	return 0;
}