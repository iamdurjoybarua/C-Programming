#include <stdio.h>  // Include the standard input/output library for functions like printf and scanf
#include <ctype.h>  // Include the ctype.h library for functions like tolower()

int main() {
    char ch; // Declare a character variable 'ch' to store the input character.

    printf("Enter an alphabet: "); // Prompt the user to enter an alphabet.
    scanf("%c", &ch); // Read the character entered by the user and store it in the 'ch' variable. %c is the format specifier for characters.

    ch = tolower(ch); // Convert the input character to lowercase using the tolower() function. This makes the vowel check case-insensitive.

    switch (ch) { // Use a switch statement to check if the character is a vowel.
        case 'a': // If the character is 'a'
        case 'e': // or 'e'
        case 'i': // or 'i'
        case 'o': // or 'o'
        case 'u': // or 'u'
            printf("%c is a vowel.\n", ch); // Print that the character is a vowel.  Note that because there are no `break` statements after the individual `case` labels for each vowel, execution "falls through" to this `printf` statement. This is how the code efficiently handles all vowels.
            break; // Exit the switch statement.

        default: // If the character is not a vowel (i.e., it's a consonant or other character).
            printf("%c is a consonant.\n", ch); // Print that the character is a consonant.
            break; // Exit the switch statement (although not strictly necessary for the last case).
    }

    return 0; // Return 0 to indicate successful program execution.
}
