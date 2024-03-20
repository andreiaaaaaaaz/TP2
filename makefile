# Define the name of the executable file
EXECUTABLE = helloworld

# Define the source file
SOURCE = helloworld.c

# Define the compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -O2

# Define the rule to compile the source file
$(EXECUTABLE) : $(SOURCE)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SOURCE)

# Define the rule to clean the executable file
clean :
	rm -f $(EXECUTABLE)

