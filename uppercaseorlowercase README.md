# Character Type Identifier (C)

This C program determines whether a given character is an uppercase letter, a lowercase letter, or not an alphabet character.

## Description

The program prompts the user to enter a character. It then checks the ASCII value of the character to determine its type:

*   If the character falls within the ASCII range of uppercase letters (A-Z), it prints that the character is an uppercase letter.
*   If the character falls within the ASCII range of lowercase letters (a-z), it prints that the character is a lowercase letter.
*   If the character does not fall within either of these ranges, it prints that the character is not an alphabet character.

## How to Compile and Run

1.  **Save the code:** Save the C code in a file named `char_type.c` (or any other name with a `.c` extension).

2.  **Compile:** Open a terminal or command prompt and use a C compiler (like GCC) to compile the code. Navigate to the directory where you saved the file and run the following command:

    ```bash
    gcc char_type.c -o char_type
    ```

    This will create an executable file named `char_type` (or `char_type.exe` on Windows).

3.  **Run:** Execute the compiled program by running the following command in the terminal:

    ```bash
    ./char_type  # On Linux/macOS
    char_type.exe # On Windows
    ```

4.  **Input:** The program will prompt you to enter a character. Enter a single character and press Enter.

5.  **Output:** The program will print the type of the entered character (uppercase letter, lowercase letter, or not an alphabet).
