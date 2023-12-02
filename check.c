#include <stdio.h>
#include <story.h>


int check(int choice);
int check(int choice){
        if (choice == 1 || choice == 2 || choice == 3 || choice == 4){
            return 1;
        }
        else{
            return 0;
        }
}
/*Goes in the “main”
    int choice;
    int scanResult = scanf("%d", &choice);

    while (scanResult != 1 || !check(choice)) {
        printf("Invalid input. Input a number:\n");
        while (getchar() != '\n');
        scanResult = scanf("%d", &choice);
    }
*/

