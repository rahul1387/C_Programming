#include<stdio.h>
#include<conio.h>

void main(){
    int i,j,rowNum;

    printf("Enter number of row: ");
    scanf("%d" , &rowNum);

    for (i = 1; i <= rowNum; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
        
    }
    
}