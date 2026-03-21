// Write a program in C to check whether a given year is a Leap Year

#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    printf("The year entered is: %d", year);
    if (year%400==0)
    {
        printf("It is a leap year");
    }
    else if (year%4==0 && year%100!=0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
    return 0;
}
