#include <stdio.h>
void main()
{
    float length, breadth, height, radius, area, pi = 3.14;
    int opt;
    printf("Choose one of the options to find area: \n1.Rectangle \n2.Square \n3.Triangle \n4.Circle \n");
    printf("Your option:");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("Enter length and breadth:");
        scanf("%f %f", &length, &breadth);
        if (length < 0 || breadth < 0)
        {
            printf("Values cant be negative");
        }
        else
        {
            area = length * breadth;
            printf("The area is %f", area);
        }
        break;

    case 2:
        printf("Enter length:");
        scanf("%f", &length);
        if (length < 0)
        {
            printf("Values cant be negative");
        }
        else
        {
            area = length * length;
            printf("The area is %f", area);
        }
        break;

    case 3:
        printf("Enter length and heigth:");
        scanf("%f %f", &length, &height);
        if (length < 0 || height < 0)
        {
            printf("Values cant be negative");
        }
        else
        {
            area = length * height * 0.5;
            printf("The area is %f", area);
        }
        break;

    case 4:
        printf("Enter radius:");
        scanf("%f", &radius);
        if (radius < 0)
        {
            printf("Values cant be negative");
        }
        else
        {
            area = 2 * pi * radius;
            printf("The area is %f", area);
        }
        break;
    default:
        printf("Invalid option");
    }
}