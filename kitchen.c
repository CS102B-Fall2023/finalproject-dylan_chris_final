#include <stdio.h>
#include <string.h>
#include <story.h>

int check4(int choice); // function
int check4(int choice){
        if (choice == 1 || choice == 2 || choice == 3 || choice == 4){
            return 1;
        }
        else{
            return 0;
        }
}

int kitchen(){
        printf("You walk in the kitchen and start making breakfast. \n What do you want to make?\n");
        printf("1. Nothing \n2. Milk and cereal \n3. Avocado toast \n4. A single boiled egg \n\n Input a number:\n");

	int choice;
    int scanResult = scanf("%d", &choice);

    while (scanResult != 1 || !check4(choice)) {//while loop
        printf("Invalid input. Input a number:\n");
        while (getchar() != '\n');
        scanResult = scanf("%d", &choice);
    }        

        if (choice == 1){
                printf("You can't eat anything today, you're going to be late\n");
        }
        else if (choice == 2){
                printf("Milk and cereal, a solid morning meal\n");
        }
        else if (choice == 3){
                printf("Mmm, avocado toast, a tasty and healthy breakfast\n");
        }
        else{
                printf("A boiled egg, a little bland but better than nothing\n");
        }

        return 0;
}
