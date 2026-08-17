#include<stdio.h>
int main()
{
  int arr[5],i,sum=0;
   printf("enter the numbers:\n");
  for(i=0;i<5;i++)
  {
  	scanf("%d",&arr[i]);
  }

  for(i=0;i<5;i++)
  {
  	sum=sum+arr[i];
  }

printf("%d is the sum\n",sum);
	return 0;
}