#include<stdio.h>
int main()
{   int arr[5],i,x,j;
    printf("enter the elements:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<5;i++)
    {   x=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    printf("SORTED ARRAY:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}

