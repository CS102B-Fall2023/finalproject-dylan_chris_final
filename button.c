#include <stdio.h>
#include <story.h>


//int check(int choice);
int video();
int check0(int choice){
        if (choice == 1 || choice == 2){
            return 1;
        }
        else{
            return 0;
        }
}
int button(){

	printf("You stop and say ‘I don’t need to go to Turd’s class’. You follow the instructions and end up in an alley a block from the school. You see a table with a note on it. You look at it and find another note. You pick it up and read. It says ‘press the big red button’.\n");
	printf("1. You press the button.\n2. You ignore it and walk back to school.\n");
	int choice;
	int scanResult = scanf("%d", &choice);
	printf("Your choice is %d\n", choice);
    	printf("Are you sure about that?\n");
	do{
        //	printf("Invalid input. Input a number:\n");
        	while(getchar() != '\n');
        	scanf("%d", &choice);
		if (!check0(choice)){
			printf("Invalid input. Input a number:\n");
		}
    	}while(!check0(choice));
	if (choice == 1){
		int choice2;
		printf("You press the button and the floor opens beneath you. You land on a platform that takes you all the way down. It is a circular room. In it is another button. Do you press it?\n");
		printf("1. Yes\n2. No\n");
		scanf("%d", &choice2);
    		while(choice2 != 1){
			printf("It seems like you are trapped.\n");	
			do{
       				//printf("Invalid input. Input a number:\n");
        			printf("It seems like you are trapped.\n");
				while(getchar() != '\n');
        			scanf("%d", &choice2);
				
           		}while(choice2!= 1 || !check0(choice));
		}
		if (choice2 == 1){
			printf("You have pressed the button.\n");
			video();
		}
	}
	else if (choice ==2){
		printf("You ignore it and walk back to school.");
		ignore();
	}	
	return 0;
}

int video(){
	printf("You press the button and a video shows up. A person's face appears and starts talking ‘Welcome to the Society of Peter Cooper. This is an organization dedicated to the survival of the students of the Cooper union. 100 years ago, one evil Professor Turd arrived at the school. Since then this organization has been dedicated to defeating him and forcing him into retirement with a perfect score. As the last remaining member it is your duty to use the info around you and finally achieve the perfect score.’ When the video ends a shelf of books and a button to return to the surface emerges. Do you read the books?\n");	
	printf("1. Yes\n2. No\n");
	int choice;
	int scanResult = scanf("%d", &choice);

    	while (scanResult != 1 || !check0(choice)) {
        	printf("Invalid input. Input a number:\n");
        	while(getchar() != '\n');
        	scanResult = scanf("%d", &choice);
    	}
	if (choice == 1){
		printf("You read the books.\n");
		yesread();
	}else if(choice == 2){
		printf("You push the button instead, deciding this is all a joke. You go back to the surface and return to class where Professor Turd gives you a pop quiz. You fail. Miserably. You get the lowest score ever seen to man. You got into the negatives. How is that possible.\n");
	}
	return 0;

}
