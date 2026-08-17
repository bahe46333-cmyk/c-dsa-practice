#include<stdio.h>
int main()
{ 
  int arr[5],i;
  printf("enter the numbers:");
  for( i=0;i<5;i++)
  {
  scanf("%d",&arr[i]);
}
printf(" all the array elements are:\n");

for (i=0;i<5;i++)
{
	printf("%d \n",arr[i]);
}
return 0;	
}