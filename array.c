#include <stdio.h>
/*
int main()
{
   int a[10];
   int i;
   printf("Enter the array element: "); //display 10 elements from the user
   
   for(i = 0; i<=9; i++)
   {
    scanf("%d", &a[i]);
   }
   printf("%d\n", a[9]);
   return(0);
}
*/

void main()
{
    int a[5];
    int b[5];
    int c[5];

    int i;
    for(i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<=4; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0; i<=4; i++)
    {
        scanf("%d", &c[5]);
    }

    c[5] = a[5] + b[5];
    printf("%d\n", c[5]);
}