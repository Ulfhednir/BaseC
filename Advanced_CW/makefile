CC = gcc
CFLAGS = -Wall -std=c99 -O2
LDFLAGS = -lm

TARGET = program
SRCS = coursework.c

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS)

clean:
	rm -f $(TARGET) *.o
