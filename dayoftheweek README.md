# Day of the Week (C)

This C program displays the day of the week corresponding to a number entered by the user.

## Description

The program prompts the user to enter a number between 1 and 7 (inclusive).  It then uses a `switch` statement to determine the corresponding day of the week and prints the result. The mapping is as follows:

*   1: Monday
*   2: Tuesday
*   3: Wednesday
*   4: Thursday
*   5: Friday
*   6: Saturday
*   7: Sunday

If the user enters a number outside the valid range (1-7), the program displays an error message.

## How to Compile and Run

1.  **Save the code:** Save the C code in a file named `day_of_week.c` (or any other name with a `.c` extension).

2.  **Compile:** Open a terminal or command prompt and use a C compiler (like GCC) to compile the code.  Navigate to the directory where you saved the file and run the following command:

    ```bash
    gcc day_of_week.c -o day_of_week
    ```

    This will create an executable file named `day_of_week` (or `day_of_week.exe` on Windows).

3.  **Run:** Execute the compiled program by running the following command in the terminal:

    ```bash
    ./day_of_week  # On Linux/macOS
    day_of_week.exe # On Windows
    ```

4.  **Input:** The program will prompt you to enter a number. Enter a number between 1 and 7 and press Enter.

5.  **Output:** The program will print the corresponding day of the week or an error message if the input is invalid.
