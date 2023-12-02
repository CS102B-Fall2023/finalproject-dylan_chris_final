#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
//Using if-else loops
int isValidInteger(const char *input);
int wear(n)
{
//	int n;
	if (n <= 4 && n >= 1){		
		if (n == '1'){ 
			printf("You are wearing blue t-shirt and black pants.\n");
		}	
		else if (n == 2){ 
			printf("You are wearing white shirt and jeans.\n");
		}
		else if (n == 3){
			printf("You are wearing star wars t-shirt and khakis.\n");
		}
		else if (n == 4){
			printf("You are wearing oversized hoodie and gray sweatpants.\n");
		}	
	}else{
		printf("Invalid Input.\n");
		
	}
	return 0;
}

int main(){
	
	printf("What do you want to wear today?\n");
        printf("Your choices are: \n 1. You are wearing blue t-shirt and black pants \n 2. You are wearing white shirt and jeans \n 3. You are wearing star wars t-shirt and khakis \n 4. You are wearing oversized hoodie and gray sweatpants \n");
        
	char input[20]; // Assuming a maximum length of 20 characters for input
	int n;
    while (1) {
        printf("Enter a number: ");
        fgets(input, sizeof(input), stdin);
	if (input[strlen(input) - 1] == '\n') {
            input[strlen(input) - 1] = '\0';
        }
        if (isValidInteger(input)) {
            int n = atoi(input); 
//            printf("You entered the integer: %d\n", number);
	    wear(n);	
            break; // Exit the loop if a valid integer is entered
        } else {
            printf("Invalid input. Please enter a valid integer.\n");
        }
    }
	wear(n);
	return 0;
}

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
