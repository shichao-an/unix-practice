CC = gcc-4.2
CFLAGS = -Wall

.PHONY: clean all

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

all: f1.3_ls f1.8_error

f1.3_ls: f1.3_ls.o 
	$(CC) -o $@ $^

f1.8_error: f1.8_error.o
	$(CC) -o $@ $^

clean:
	rm *.o
