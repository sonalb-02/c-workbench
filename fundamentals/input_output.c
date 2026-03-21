// to accept the input values from user into a variable of type info., float and char respectively.

#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;

    printf("\n Enter the values: ");
    scanf("%d%f", &a, &b);

    printf("\n Enter the character: ");
    scanf(" %c", &c);

    printf("\nThe entered values are: %d%.2f%c", a, b, c);

    return 0;
}