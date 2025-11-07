#include <stdio.h>
void main()
{
    int n, n1 = 0, n2 = 1,n3;
    printf("Enter the desired limit:");
    scanf("%d", &n);
    printf("The desired list is as follows:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n",n1 );
        n3 =n1+ n2;
        n1 = n2;
        n2 = n3;
    }
}