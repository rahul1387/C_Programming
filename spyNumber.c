#include<stdio.h>
void main()
{
    int num1,num2,digit,sum=0,product=1;
    printf("Enter you number:");
    scanf("%d",&num1);
    num2=num1;
    while(num1!=0)
    {
        digit=num1%10;
        sum+=digit;
        product*=digit;
        num1=num1/10;
    }

    if(sum==product)
    {
        printf("The number %d is a spy number",num2);
    }
    else
    {
        printf("The number %d is not a spy number",num2);
    }

}