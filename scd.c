#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1 = abs(num1);
    int num2 = abs(num2);
    int i, scd = -1;
    scanf("%d%d", &num1, &num2);
    for(i=2; i<=num1&&i<=num2; i++)
    {
        if (num1%i==0&&num2%i==0)
        {
            scd = i;
            break;
        }
    }
        if(scd==-1)
        {
            printf("no common divisor");
        }
        else
        {
            printf("scd=%d", scd);
        }
    
    return 0;
}