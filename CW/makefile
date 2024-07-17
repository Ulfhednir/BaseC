CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: report

report: report.o temp_functions.o
	$(CC) $(CFLAGS) -o report report.o temp_functions.o

report.o: report.c temp_functions.h
	$(CC) $(CFLAGS) -c report.c

temp_functions.o: temp_functions.c temp_functions.h
	$(CC) $(CFLAGS) -c temp_functions.c

clean:
	rm -f *.o report
