#include <stdio.h>
int main() {
    int score;

    // Prompt the user to enter a score
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    // Check if the score is within the valid range
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a score between 0 and 100.\n"); }
    else {
    // Assign a letter grade based on the score
        if (score >= 90) {
            printf("Your grade is A\n");
        } else if (score >= 80) {
            printf("Your grade is B\n");
        } else if (score >= 70) {
            printf("Your grade is C\n");
        } else if (score >= 60) {
            printf("Your grade is D\n");
        } else {
            printf("Your grade is F\n");
        }
    }

    return  0;
}

