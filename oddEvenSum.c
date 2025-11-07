#include <stdio.h>

void main() {
    int num1,num2,evenSum=0,oddSum=0;
    
    int digit;
    
   

    printf("Enter a positive integer: ");
    scanf("%d", &num1);

    num2 = num1;

    while (num1 > 0) {
        digit = num1 % 10; 

        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }

        num1 = num1 / 10; 
    }

    printf("\n--- Results for %d ---\n",num2);
    printf("Sum of EVEN digits: %d\n", evenSum);
    printf("Sum of ODD digits: %d\n", oddSum);
}