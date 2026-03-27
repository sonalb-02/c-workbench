#include <stdio.h>

int recursive(int n)
{
    if(n <= 1)
        return 1;
    return n * recursive(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d", recursive(n));
    return 0;
}
