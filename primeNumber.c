#include <stdio.h>
#include <conio.h>

int main(){

    int number, i , j , isPrime;

    printf("Enter a number: ");
    scanf("%d", &number);

    for ( i = 2; i < number; i++)
    {
        if(i<=2)
        {
            continue;
        }
        isPrime = 1;

        for (j = 2; j * j <= i; j++)
        {
            if (i%j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d" , i);
        }
    }
    
    printf("\n");
    return 0;
}