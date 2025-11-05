#include<stdio.h>
#include<conio.h>

int main(){
    int number,sum;
    printf("Enter any number: ");
    scanf("%d", &number);

    sum += number;
    if (sum % number == 0)
    {
        printf("The number is niven");
    }
    else{
        printf("The number is not niven number");
    }
}