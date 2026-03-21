/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters. ("Let Us C" by Yashwant Kanetkar, page 47)*/

#include <stdio.h>

int main() {
    float km, meters, feet, inches, centimeters;
    printf("Enter the distance between two cities in km: ");
    scanf("%f", &km);
    meters = km * 1000;
    centimeters = meters * 100;
    inches = centimeters / 2.54;
    feet = inches / 12;
    printf("\nDistance Conversion Results:\n");
    printf("Meters:      %.2f m\n", meters);
    printf("Centimeters: %.2f cm\n", centimeters);
    printf("Inches:      %.2f in\n", inches);
    printf("Feet:        %.2f ft\n", feet);

    return 0;
}