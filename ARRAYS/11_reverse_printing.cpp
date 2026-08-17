//prints the elements from the end to the beginning
#include<stdio.h>
int main()
{
   int arr[5],i;
   printf("enter the numbers:\n");
   for(i=0;i<5;i++)
   {
   	scanf("%d",&arr[i]);
   }

   for(i=4;i>=0;i--)
   {
   	printf("%d\n",arr[i]);
   }


	return 0;
}