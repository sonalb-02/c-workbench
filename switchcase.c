//performing arithmetic operations using switch-case

#include <stdio.h>
#include <math.h>
void main()
{
    float a, b;
    int c;
    printf("Enter the nos.: ");
    scanf("%f%f", &a, &b);
    printf("\n1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n");
    printf("Choose:\n");
    scanf("%d", &c);

    switch(c)
    {
        case 1:
        printf("%f", a+b);
        break;

        case 2:
        printf("%f", a-b);
        break;

        case 3:
        printf("%f", a*b);
        break;

        case 4:
        printf("%f", a/b);
        break;

        case 5: //a^2
        printf("%.2f", pow(a, 2));
        break;

        case 6: //factorial
        {
        int i, factorial = 1;
        if(a<0)
        {
            printf("factorial of a negative number is invalid\n");
        }
        else
        {
            for(i=1; i<=a; i++)
            {
                factorial = i*factorial;
            }
            printf("the factorial of a is: %d", factorial);
        }
        }
        default:
        printf("error");
    }

}
