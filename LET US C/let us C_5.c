/*Twenty-five numbers are entered from the keyboard into an
array. The number to be searched is entered through the
keyboard by the user. Write a program to find if the number to
be searched is present in the array and if it is present, display
the number of times it appears in the array. ("Let Us C" by Yashwant Kanetkar page 307)*/

#include <stdio.h>

int main() {
    int arr[25];
    int i, search_num, count = 0;
    printf("Enter 25 integers:\n");
    for (i = 0; i < 25; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the number you want to search for: ");
    scanf("%d", &search_num);
    for (i = 0; i < 25; i++) {
        if (arr[i] == search_num) {
            count++;
        }
    }
    if (count > 0) {
        printf("\nThe number %d is present in the array.", search_num);
        printf("\nIt appears %d time(s).\n", count);
    } else {
        printf("\nThe number %d is not present in the array.\n", search_num);
    }

    return 0;
}