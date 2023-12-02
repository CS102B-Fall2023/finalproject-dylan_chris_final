#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int isValidInteger(const char *input) {
    if (input == NULL || *input == '\0') {
        return 0; // Empty string is not a valid integer
    }

    // Check if each character is a digit
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            return 0; // Non-digit character found
        }
    }

    return 1; // Input is a valid integer
}

int main() {
    char input[20]; // Assuming a maximum length of 20 characters for input

    while (1) {
        printf("Enter a number: ");
        fgets(input, sizeof(input), stdin);

        // Remove newline character from input
        if (input[strlen(input) - 1] == '\n') {
            input[strlen(input) - 1] = '\0';
        }

        if (isValidInteger(input)) {
            int number = atoi(input); // Convert string to integer
            printf("You entered the integer: %d\n", number);
            break; // Exit the loop if a valid integer is entered
        } else {
            printf("Invalid input. Please enter a valid integer.\n");
        }
    }

    return 0;
}

