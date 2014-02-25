CC = gcc-4.2
CFLAGS = -Wall

.PHONY: clean all

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

all: myls

myls: myls.o 
	$(CC) -o $@ $^

clean:
	rm *.o
