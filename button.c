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


