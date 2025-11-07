#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year<=0)
    {
        printf("Invalid year");
    }
    else if(year%4==0 ||(year%100==0 && year%400==0))
    {
        printf("Year %d is a leap year",year);
    }
    else
    {
        printf("Year %d is not a leap year",year);
    }
}