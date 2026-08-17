#include<stdio.h>
int main()
{
   int arr[5],i,smallest;
   printf("enter the 5 numbers:\n");
   
   for(i=0;i<5;i++)	
   {
   	scanf("%d",&arr[i]);
   }
  
   smallest=arr[0];
   
   for(i=0;i<5;i++)
   {
   	if(arr[i]<smallest)
   	{
   		smallest=arr[i];
   	}
   }	
	printf("%d is the smallest number\n",smallest);
return 0;
}