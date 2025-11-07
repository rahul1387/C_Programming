#include<stdio.h>
void main()
{
    int arr[6],i,temp;
    printf("Enter 6 numbers:");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    { for(i=0;i<=5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
}
    for(i=0;i<6;i++)
    {
        printf("%d ,",arr[i]);
    }
}