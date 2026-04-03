#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10], str2[10], temp[10];
    printf("enter sting1:");
    scanf("%s", &str1);
    /* if(strlen(str1) == '\0')
    {
        length++;
    }

    printf("Length of string = %d\n", length);*/
    
    length = strlen(str1);
    printf("Length of string = %d\n", length);

    printf("enter sting2:");
    scanf("%s", &str2);

    strcmp(str1, str2);

}
