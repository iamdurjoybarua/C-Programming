#include <stdio.h>  // Include standard input/output library for functions like printf and scanf
#include <stdlib.h> // Include standard library (not strictly necessary for this code, but good practice)

#define PI 3.1416 // Define a constant PI for the value of pi.  Using a #define makes it easy to change later if needed.

int main() {
    float radius, area; // Declare two floating-point variables: radius to store the circle's radius and area to store its calculated area.

    printf("Enter the radius: \n"); // Prompt the user to enter the radius of the circle.  \n adds a newline for better readability.
    scanf("%f", &radius); // Read the radius entered by the user and store it in the 'radius' variable. %f is the format specifier for floating-point numbers.

    area = (radius * radius) * PI; // Calculate the area of the circle using the formula: area = pi * radius * radius.  Parentheses ensure correct order of operations.

    printf("The Area of Circle is : %.2f\n", area); // Print the calculated area to the console. %.2f formats the output to two decimal places. \n adds a newline at the end.

    return 0; // Return 0 to indicate successful program execution. This is standard practice in C.
}
