#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <story.h>
#include <string.h>
//Using if-else loops


int check2(int choice){
        if (choice == 1 || choice == 2 || choice == 3 || choice == 4){
            return 1;
        }
        else{
            return 0;
        }
}

int wear()
{
	int n;
	printf("What do you want to wear today?\n");
        printf("Your choices are: \n 1. You are wearing blue t-shirt and black pants \n 2. You are wearing white shirt and jeans \n 3. You are wearing star wars t-shirt and khakis \n 4. You are wearing oversized hoodie and gray sweatpants \n");
	
	int choice;
	scanf("%d", &choice);

	while (!check2(choice)){
        	printf("Invalid input. Input a number:\n");
        	while (getchar() != '\n');
        	scanf("%d", &choice);
   	}        

	n = choice;
	if (n >= 1 && n <= 4){		
		if (n == 1){ 
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
        

