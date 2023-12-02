#include <story.h>
#include <stdio.h>

int check2(int choice);
int check2(int choice){
        if (choice == 1 || choice == 2){
            return 1;
        }
        else{
            return 0;
        }
}


void ignore(){
        printf("You throw it into the trash and walk to school. When you get to school you notice a poster on the door of your first class, Professor Turd's class. You peek over the shoulders of the other students and read what is says. \nPop quiz, 50 percent of your grade \nYou feel doomed. What do you do?");
        printf("1. Leave the building and wait out till the next class\n2. Walk in and take the test\n Input a number:");

	int choice;
	int scanResult = scanf("%d", &choice);

    while (scanResult != 1 || !check2(choice)) {
        printf("Invalid input. Input a number:\n");
        while (getchar() != '\n');
        scanResult = scanf("%d", &choice);
    }
	if (choice == 1){
		printf("You leave the building and go to the library to do other work. Unfortunately Professor Turd fails you for not showing up and you are kicked from The Cooper Union. Oh no. Don't skip school kids.");
	exit();
	}
	if (choice == 2){
		printf("You walk in and see the test. The questions seem alright. You fill it out and finish. You hand it in and leave. As you walk out of the room, you see Professor Turd grin. A week late you get the grade back with a big fat F. You failed. Luckily you have enough points left to pass the class for the semester. Congrats!");
	exit();
	}
}

