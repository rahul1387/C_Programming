#include<stdio.h>
void main()
{
    float height,weight,bmi;
    printf("Enter your heigth(cm) and weight(lb):");
    scanf("%f %f",&height,&weight);
    if(height<=0||weight<=0)
    {
        printf("Invalid values");
    }
    bmi=weight/(height*height);
    if(bmi<18.5)
    {
        printf("You are underweight");
    }
    else if(bmi>=18.5&&bmi<24.9)
    {
        printf("You are healthy weight");
    
    }
    else if(bmi>=24.9&&bmi<29.9)
    {
        printf("You are overweight");
    }
    else if(bmi>=29.9&&bmi<34.9)
    {
        printf("You are OBESE - Class I");
    }
    else if(bmi>=34.9&&bmi<39.9)
    {
        printf("You are OBESE - Class II");
    }
    else
    {
        printf("You are OBESE - Class III");
    
    }
}