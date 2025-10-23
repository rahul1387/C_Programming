#include <stdio.h>
#include <conio.h>

int main(){
    int day;
    printf("Enter a day(1-7): ");
    scanf("%d" , &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break; // ---> This is used to exit the switch loop,its mandatory or else it will be executing other cases also
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday"); 
        break;
    case 6:
        printf("Saturday");  
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Not a valid Day");
    }
}
