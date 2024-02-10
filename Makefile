CC = gcc
CFLAGS = -Wall
SRCS = $(wildcard *.c)
TARGETS = $(SRCS:.c=)

# Kompiliert jedes .c File zu einem separaten Programm
all: $(TARGETS)

$(TARGETS):
	$(CC) $(CFLAGS) -o $@ $@.c

clean:
	rm -f $(TARGETS)

test: all
	./run_tests.sh

.PHONY: all clean test
