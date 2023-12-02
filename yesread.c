#include <stdio.h>
#include <story.h>

int check(int choice);
int check(int choice){
        if (choice == 1 || choice == 2 || choice == 3){
            return 1;
        }
        else{
            return 0;
        }
}


int yesread(){
        printf("You read. And study. Luckily you are a speed reader because there are a lot of books. By the time you reach the last book, you have the world’s information in your brain. You finally finish and press the button. You return to class to find Professor Turd is about to give out a test. You blitz through the test till the last question. It is 1+1 = ?\n");
	printf("1. 1\n2. 2\n3. 3\n");
        printf("Your solution:\n");

   	int choice;
        int scanResult = scanf("%d", &choice);

    	while (scanResult != 1 || !check(choice)) {
        	printf("Invalid input. Input a number:\n");
        	while (getchar() != '\n');
        	scanResult = scanf("%d", &choice);
    	}	
	
	if (choice == 1 || choice == 3){
		printf("You chose wrong and Professor Turd stays around for another 100 years till he bankrupts the school. You pass the test but fail The Cooper Union. Womp Womp. You suck.\n");
//	break;
	}else {
		printf("You got it right and aced the test! While grading the test Professor Turd realizes and disintegrates into a pile of ash. You are the hero of The Cooper Union. Woohoo! Too bad you got a HSS minor.\n");
	}
	return 0;
}
