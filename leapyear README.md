# Leap Year Checker (C)

This C program determines whether a given year is a leap year.

## Description

The program prompts the user to enter a year and then checks if it's a leap year.  A leap year is a year that is divisible by 4, except for years that are divisible by 100 but not by 400.  In simpler terms:

1.  Years divisible by 4 are leap years.
2.  However, years divisible by 100 are NOT leap years, *unless* they are also divisible by 400.

For example:

*   2000 is a leap year (divisible by 4, 100, and 400).
*   1900 is NOT a leap year (divisible by 4 and 100, but not 400).
*   2024 is a leap year (divisible by 4).
*   2023 is NOT a leap year.

## How to Compile and Run

1.  **Save the code:** Save the C code in a file named `leapyear.c` (or any other name with a `.c` extension).

2.  **Compile:** Open a terminal or command prompt and use a C compiler (like GCC) to compile the code.  Navigate to the directory where you saved the file and run the following command:

    ```bash
    gcc leapyear.c -o leapyear
    ```

    This will create an executable file named `leapyear` (or `leapyear.exe` on Windows).

3.  **Run:** Execute the compiled program by running the following command in the terminal:

    ```bash
    ./leapyear  # On Linux/macOS
    leapyear.exe # On Windows
    ```

4.  **Input:** The program will prompt you to enter a year. Enter the year and press Enter.

5.  **Output:** The program will display whether the entered year is a leap year or not.
