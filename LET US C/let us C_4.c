/*Write a program which to find the grace marks for a student
using switch. The user should enter the class obtained by the
student and the number of subjects he has failed in.
− If the student gets first class and the number of subjects he
failed in is greater than 3, then he does not get any grace.
If the number of subjects he failed in is less than or equal
to 3 then the grace is of 5 marks per subject.
− If the student gets second class and the number of subjects
he failed in is greater than 2, then he does not get any
grace. If the number of subjects he failed in is less than or
equal to 2 then the grace is of 4 marks per subject.
− If the student gets third class and the number of subjects
he failed in is greater than 1, then he does not get any
grace. If the number of subjects he failed in is equal to 1
then the grace is of 5 marks per subject ("Let Us C" by Yashwant Kanetkar page 155)*/

#include <stdio.h>

int main() {
    int class, failed_subs, grace = 0;

    printf("Enter the class obtained by the student (1, 2, or 3): ");
    scanf("%d", &class);
    printf("Enter the number of subjects the student failed in: ");
    scanf("%d", &failed_subs);

    switch(class) {
        case 1: 
            if (failed_subs <= 3) {
                grace = 5 * failed_subs;
            } else {
                grace = 0;
            }
            break;

        case 2: 
            if (failed_subs <= 2) {
                grace = 4 * failed_subs;
            } else {
                grace = 0;
            }
            break;

        case 3: 
            if (failed_subs <= 1) {
                grace = 5 * failed_subs;
            } else {
                grace = 0;
            }
            break;

        default:
            printf("Invalid class entered. Please enter 1, 2, or 3.\n");
    }
    if (grace > 0) {
        printf("The student receives a total of %d grace marks.\n", grace);
    } else {
        printf("The student receives no grace marks.\n");
    }

    return 0;
}