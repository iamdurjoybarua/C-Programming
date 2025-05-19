#include <stdio.h> // Include the standard input/output library for functions like printf and scanf

int main() {
    int year; // Declare an integer variable 'year' to store the year entered by the user.

    printf("Enter a year: "); // Prompt the user to enter a year.
    scanf("%d", &year); // Read the integer entered by the user and store it in the 'year' variable. %d is the format specifier for integers.

    // Check if the year is a leap year using the following rules:
    // 1. If the year is divisible by 4 but not divisible by 100, it's a leap year.
    // 2. If the year is divisible by 400, it's also a leap year.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year); // If the condition is true, print that the year is a leap year.
    } else {
        printf("%d is not a leap year.\n", year); // Otherwise, print that the year is not a leap year.
    }

    return 0; // Return 0 to indicate successful program execution. This is standard practice in C.
}
