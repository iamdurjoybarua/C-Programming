# Grade Calculator (C)

This C program calculates a letter grade based on a numerical score entered by the user.

## Description

The program prompts the user to enter a numerical score between 0 and 100 (inclusive). It then assigns a letter grade based on the following grading scale:

*   90-100: A
*   80-89: B
*   70-79: C
*   60-69: D
*   Below 60: F

If the user enters a score outside the valid range (0-100), the program displays an error message.

## How to Compile and Run

1.  **Save the code:** Save the C code in a file named `grade_calculator.c` (or any other name with a `.c` extension).

2.  **Compile:** Open a terminal or command prompt and use a C compiler (like GCC) to compile the code. Navigate to the directory where you saved the file and run the following command:

    ```bash
    gcc grade_calculator.c -o grade_calculator
    ```

    This will create an executable file named `grade_calculator` (or `grade_calculator.exe` on Windows).

3.  **Run:** Execute the compiled program by running the following command in the terminal:

    ```bash
    ./grade_calculator  # On Linux/macOS
    grade_calculator.exe # On Windows
    ```

4.  **Input:** The program will prompt you to enter a score. Enter a numerical score between 0 and 100 and press Enter.

5.  **Output:** The program will display the corresponding letter grade or an error message if the score is invalid.
