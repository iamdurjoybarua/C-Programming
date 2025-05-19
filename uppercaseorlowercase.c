#include <stdio.h> // Include the standard input/output library for functions like printf and scanf

int main() {
    char ch; // Declare a character variable 'ch' to store the input character.

    printf("Enter a character: "); // Prompt the user to enter a character.
    scanf("%c", &ch); // Read the character entered by the user and store it in the 'ch' variable. %c is the format specifier for characters.

    // Check if the character is an uppercase letter.
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    } 
    // If it's not uppercase, check if it's a lowercase letter.
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } 
    // If it's neither uppercase nor lowercase, it's not an alphabet.
    else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0; // Return 0 to indicate successful program execution.
}
