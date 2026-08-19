#include<stdio.h>
int main()
{
    int arr[5],i,j,temp;
    printf("enter the elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(j=0;j<4;j++)
    {
        for(i=0;i<4-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
    }
    printf("sorted array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d \n",arr[i]);

    }
    return 0;
}