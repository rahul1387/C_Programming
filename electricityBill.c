#include<stdio.h>
void main()
{
    int bill,unit;
    float total=0;
    printf("Enter amount of units used:");
    scanf("%d",&unit);
    if(unit<0)
    printf("Invalid values");
    if(unit<=100)
    {
        total=unit*1.5;
    }
    else if(unit<300)
    {
        total=((100*1.5)+((unit-100)*3));
    }
    else
    {
        total=((100*1.5)+(200*3)+((unit-300)*5));
    }
    printf("Your bill is:%f",total);
}