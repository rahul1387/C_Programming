#include<stdio.h>

void main(){
    float sumOfSeries = 0;
    int i, number, one = 1;
    printf("Enter a last number: ");
    scanf("%d", &number);
    printf("The harmonic series is:");

    for (i = 1; i <= number; i++)
    {
        printf("1/%d ", i);
        if (i != number)
        {
            printf("+");
        }
        sumOfSeries += (1.0 / i);
    }
    printf("\nSum of series upto %d is:%f", number, sumOfSeries);
}