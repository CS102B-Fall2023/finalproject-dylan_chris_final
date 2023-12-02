#include <stdio.h>
#include <story.h>

//int check(int choice); // function
int check(int choice){
        if (choice == 1 || choice == 2){
            return 1;
        }
        else{
            return 0;
        }
}


int choices(){
	printf("You put on your shoes and walk out of the building.But before you get to the train station an envelope fell down from above and hit you in the head.\n 'Ouch'\n");
	printf("You open the envelope. Inside there is a piece of paper.\n"); 
	
	printf("You are the last remaining member of the society of Peter Cooper and only you can save us. Stop what you are doing now and walk 360 steps north and then turn to the east and walk another 270 steps where you will find the next clue.\n What do you do?\n 1. Stop what you are doing now and follow the paper. \n 2. Ignore it and throw it into the trash and carry on with your day.\n");

	  int choice;
    int scanResult = scanf("%d", &choice);

    while (scanResult != 1 || !check(choice)) {//while loop
        printf("Invalid input. Input a number:\n");
        while (getchar() != '\n');
        scanResult = scanf("%d", &choice);
    }
	
	switch(choice)
	{
		case 1:
			printf("You chose option 1\n");
			button();
			break;
		case 2: 
			printf("You chose option 2.\n");
			ignore();
			break;
	}
	return 0;
}


