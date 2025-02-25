CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = fibby.exe
SRCS = main.c memoize.c fibonacci.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run: all
	./$(TARGET)

test: all
	./tests.sh

.PHONY: all clean run test
