CC=gcc
CFLAGS=-I.

# This will create your final output using .o compiled files
make: main.o cooper.o hello.o kitchen.o wear.o
	$(CC) $(CFLAGS) -o main main.o cooper.o hello.o kitchen.o wear.o

cooper.o: cooper.c story.h
	$(CC) $(CFLAGS) -c cooper.c

hello.o: hello.c story.h
	$(CC) $(CFLAGS) -c hello.c

kitchen.o: kitchen.c story.h
	$(CC) $(CFLAGS) -c kitchen.c

wear.o: wear.c story.h
	$(CC) $(CFLAGS) -c wear.c

main.o: main.c story.h
	$(CC) $(CFLAGS) -c main.c 

clean:
	rm -f *.o *.exe

