#include<stdio.h>
int main()
{
    int arr[5],i,key;
    printf("enter the elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the key:\n");
    scanf("%d",&key);

    int mid,low=0,high=4;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("%d is found at index: %d\n",key,i);
            break;
        }
         else if(arr[mid]<key)
         {
            low=mid+1;
         }
         else //(arr[mid]>key)
         {
            high=mid-1;
         }
    }
    return 0;
}