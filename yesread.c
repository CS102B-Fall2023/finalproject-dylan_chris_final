#include <stdio.h>
#include <story.h>

int yesread();
int check(int choice);
int isPalindrome(char *string);
int check5(int choice){
        if (choice == 1 || choice == 2 || choice == 3){
            return 1;
        }
        else{
            return 0;
        }
}

void palindrome(){
	printf("You read. And study. Luckily you are a speed reader because there are a lot of books. By the time you reach the last book, you have the world’s information in your brain.\n");
	printf("You decide to test your knowledge by writing out some words from your reading that are palindromes.\n");
	char word[100];
	do{
		printf("What is your word?\n");
		scanf("%s", word);	
	}while(!isPalindrome(word));
}

int isPalindrome(char *string) 
{ 
    char *ptr, *rev; 
 
    ptr = string; 
 
    while (*ptr != '\0') { 
        ++ptr; 
    } 
    --ptr; 
 
    for (rev = string; ptr >= rev;) { 
        if (*ptr == *rev) { 
            --ptr; 
            rev++; 
        } 
        else
            break; 
    } 
 
    if (rev > ptr){ 
        printf("Word is Palindrome\n");
	return 1; 
    }else{
        printf("Word is not a Palindrome\n");
	return 0; 
	}
	return 0;
} 



int yesread(){
	palindrome();
      	printf("You finally finish and press the button. You return to class to find Professor Turd is about to give out a test. You blitz through the test till the last question. It is 1+1 = ?\n");
	printf("1. 1\n2. 2\n3. 3\n");
        printf("Your solution:\n");

   	int choice;
        int scanResult = scanf("%d", &choice);

    	while (scanResult != 1 || !check5(choice)) {
        	printf("Invalid input. Input a number:\n");
        	while (getchar() != '\n');
        	scanResult = scanf("%d", &choice);
    	}	
		
	if (choice == 1 || choice == 3){
		printf("You chose wrong and Professor Turd stays around for another 100 years till he bankrupts the school. You pass the test but fail The Cooper Union. Womp Womp. You suck.\n");
	return 0;
	}else {
		printf("You got it right and aced the test! While grading the test Professor Turd realizes and disintegrates into a pile of ash. You are the hero of The Cooper Union. Woohoo! Too bad you got a HSS minor.\n");
	
		return 0;;
	}
	return 0;
}
