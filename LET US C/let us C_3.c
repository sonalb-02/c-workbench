/*Write a program to enter the numbers till the user wants and
at the end it should display the count of positive, negative and
zeros entered. ("Let Us C" by Yashwant Kanetkar page 129)*/

#include <stdio.h>

int main() {
    int num;
    int pos = 0, neg = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            zero++;
        }
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 
    } while (choice == 'y' || choice == 'Y');
    printf("\n--- Final Counts ---\n");
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeros:            %d\n", zero);

    return 0;
}