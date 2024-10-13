CC = g++
CFLAGS = -c -Wall

all: hello

hello: main.o functions.o hello.o
	$(CC) main.o functions.o hello.o -o main
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
	
functions.o: functions.cpp
	$(CC) $(CFLAGS) functions.cpp
	
hello.o: hello.cpp
	$(CC) $(CFLAGS) hello.cpp
	
clean:
	rm -rf *.o hello
