CC=gcc
CFLAGS=-I.

# This will create your final output using .o compiled files
make: main.o cooper.o hello.o kitchen.o wear.o ignore.o yesread.o button.o 
	$(CC) $(CFLAGS) -o main main.o cooper.o hello.o kitchen.o wear.o ignore.o yesread.c button.c

cooper.o: cooper.c story.h
	$(CC) $(CFLAGS) -c cooper.c

hello.o: hello.c story.h
	$(CC) $(CFLAGS) -c hello.c

kitchen.o: kitchen.c story.h
	$(CC) $(CFLAGS) -c kitchen.c

wear.o: wear.c story.h
	$(CC) $(CFLAGS) -c wear.c

button.o: button.c story.h
	$(CC) $(CFLAGS) -c button.c

ignore.o: ignore.c story.h
	$(CC) $(CFLAGS) -c ignore.c

yesread.o: yesread.o story.h
	$(CC) $(CFLAGS) -c yesread.c

main.o: main.c story.h
	$(CC) $(CFLAGS) -c main.c 

clean:
	rm -f *.o *.out


