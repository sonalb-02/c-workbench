#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);

    if(a>b)
    {
        printf("%d is the largest\n", a);
    }
    else
    {
        printf("%d is the largest\n", b);
    }
}