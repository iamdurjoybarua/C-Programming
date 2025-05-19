#include <stdio.h> // Include standard input/output library for functions like printf and scanf

int main() {
    int limit, i, first = 0, second = 1, next; // Declare integer variables: limit (up to which Fibonacci numbers are generated), i (loop counter), first and second (first two Fibonacci numbers), next (next Fibonacci number).
    int fibonacci[100]; // Declare an integer array 'fibonacci' to store the generated Fibonacci numbers.  Assuming a maximum of 100 Fibonacci numbers.  It's important to be mindful of the size of this array to prevent potential buffer overflows if the limit is very large.

    printf("Enter the limit: "); // Prompt the user to enter the upper limit for the Fibonacci series.
    scanf("%d", &limit); // Read the limit from the user and store it in the 'limit' variable. %d is the format specifier for integers.

    fibonacci[0] = first; // Initialize the first element of the 'fibonacci' array with the first Fibonacci number (0).
    fibonacci[1] = second; // Initialize the second element of the 'fibonacci' array with the second Fibonacci number (1).

    i = 2; // Initialize the loop counter 'i' to 2, as the first two Fibonacci numbers are already stored in the array.
    next = first + second; // Calculate the next Fibonacci number.

    while (next <= limit) { // Loop until the next Fibonacci number exceeds the given limit.
        fibonacci[i] = next; // Store the calculated next Fibonacci number in the array.
        first = second; // Update 'first' to the value of 'second'.
        second = next; // Update 'second' to the value of 'next'.
        next = first + second; // Calculate the next Fibonacci number.
        i++; // Increment the loop counter.
    }

    printf("Fibonacci series up to %d:\n", limit); // Print a message indicating the limit of the Fibonacci series.
    for (int j = 0; j < i; j++) { // Loop through the 'fibonacci' array to print the generated Fibonacci numbers.
        printf("%d ", fibonacci[j]); // Print each Fibonacci number followed by a space.
    }
    printf("\n"); // Print a newline character at the end.

    return 0; // Return 0 to indicate successful program execution.
}
