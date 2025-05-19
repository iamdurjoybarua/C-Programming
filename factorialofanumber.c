#include <stdio.h> // Include the standard input/output library for functions like printf and scanf

int main() {
    int num; // Declare an integer variable 'num' to store the number entered by the user.

    printf("Enter a number: "); // Prompt the user to enter a number.
    scanf("%d", &num); // Read the integer entered by the user and store it in the 'num' variable. %d is the format specifier for integers.

    int factorial = 1; // Declare an integer variable 'factorial' and initialize it to 1.  The factorial of 0 is 1, and we'll be multiplying, so it's important to start at 1.

    // Calculate the factorial using a for loop.
    for (int i = 1; i <= num; i++) { // Loop from 1 up to and including the number entered by the user.
        factorial *= i; // Multiply the current value of 'factorial' by 'i' in each iteration. This is equivalent to factorial = factorial * i;
    }

    printf("Factorial of %d is %d.\n", num, factorial); // Print the calculated factorial. %d is used to format integers in the output. \n adds a newline character.

    return 0; // Return 0 to indicate successful program execution. This is standard practice in C.
}
