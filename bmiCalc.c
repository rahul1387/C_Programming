#include<stdio.h>
#include<conio.h>

int main(){
    float height,weight,BMI;

    printf("Enter your height(m) & weight(kg) : ");
    scanf("%f %f", &height, &weight);

    BMI = weight / (height * height);

    if (BMI<18.5)
    {
        printf("Eat,you skeleton");
    }else if (BMI>18.5 || BMI<24.9)
    {
        printf("Perfect Disgusting");
    }else{
        printf("Bro you're buffering fat");
    }
    
}