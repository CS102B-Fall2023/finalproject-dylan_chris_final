#include <stdio.h>
#include <story.h>
int check(int choice);
int check(int choice){
        if (choice == 1 || choice == 2){
            return 1;
        }
        else{
            return 0;
        }
}

int main(){

	printf("You stop and say ‘I don’t need to go to Turd’s class’. You follow the instructions and end up in an alley a block from the school. You see a table with a note on it. You look at it and find another note. You pick it up and read. It says ‘press the big red button’.\n");
	printf("1. You press the button.\n 2. You ignore it and walk back to school.\n");
	int choice;
    int scanResult = scanf("%d", &choice);

    do{
        printf("Invalid input. Input a number:\n");
        while (getchar() != '\n');
        scanResult = scanf("%d", &choice);
    }while (scanResult != 1 || !check(choice))
	if (choice == 1){
		choice = 0;
		printf("You press the button and the floor opens beneath you. You land on a platform that takes you all the way down. It is a circular room. In it is another button. Do you press it?\n");
		printf("1. No\n 2. Yes\n");
		int scanResult = scanf("%d", &choice);
    		do{
       			printf("Invalid input. Input a number:\n");
        		while (getchar() != '\n');
        		scanResult = scanf("%d", &choice);
    		}while (scanResult != 1 || !check(choice))
		if (choice == 1){
			int scanResult = scanf("%d", &choice);

    			do{
        			printf("It seems like you're trapped:\n");
        			while (getchar() != '\n');
        			scanResult = scanf("%d", &choice);
    			}while (scanResult != 1 || !check(choice))
		}else if(choice == 2){
			printf("test case\n");

		}
	}

	return 0;
}
