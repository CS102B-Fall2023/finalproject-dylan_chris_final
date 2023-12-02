#include <story.h>
#include <stdio.h>
#include <string.h>
int check3(int choice);
int check3(int choice){
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
        //array
        char op1[164] = {'Y','o','u',' ','l','e','a','v','e',' ','a','n','d',' ','g','o',' ','t','o',' ','t','h','e',' ','l','i','b','r','a','r','y','.',' ','U','n','f','o','r','t','u','n','a','t','e','l','y',' ','P','r','o','f','e','s','s','o','r',' ','T','u','r','d',' ','f','a','i','l','s',' ','y','o','u',' ','f','o','r',' ','n','o','t',' ','s','h','o','w','i','n','g',' ','u','p',' ','a','n','d',' ','y','o','u',' ','a','r','e',' ','k','i','c','k','e','d',' ','f','r','o','m',' ','t','h','e',' ','C','o','o','p','e','r',' ','U','n','i','o','n','.',' ','O','h',' ','n','o','.',' ','D','o',' ','n','o','t',' ','s','k','i','p',' ','s','c','h','o','o','l',' ','k','i','d','s','.'};

        char *ptr = op1;
        int choice;
	int scanResult = scanf("%d", &choice);

    while (scanResult != 1 || !check3(choice)) {
        printf("Invalid input. Input a number:\n");
        while (getchar() != '\n');
        scanResult = scanf("%d", &choice);
    }
	if (choice == 1){//for loop
	for(; ptr < strlen(op1); ptr++){
                printf("%c", *ptr);
        }
  //      break;
	}
	if (choice == 2){
		printf("You walk in and see the test. The questions seem alright. You fill it out and finish. You hand it in and leave. As you walk out of the room, you see Professor Turd grin. A week late you get the grade back with a big fat F. You failed. Luckily you have enough points left to pass the class for the semester. Congrats!\n");
//	break();
	}
}

