#include<stdio.h>
void main()
{
    int num1,num2,digit,sum=0;
    printf("Enter you number:");
    scanf("%d",&num1);
    num2=num1;
    while(num1!=0)
    {
        digit=num1%10;
        sum+=digit;
        num1=num1/10;
    }
    if(num2%sum==0)
    {
        printf("The number %d is a niven number",num2);
    }
    else
    {
        printf("The number %d is not a nivem number",num2);
    }

}