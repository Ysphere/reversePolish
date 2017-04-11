CC = gcc
CFLAGS = -Wall -std=c99 -I$(IDIR)

IDIR = ./include/
SRCDIR = ./src/

SOURCES = $(SRCDIR)*.c 

all: make

make:
	$(CC) $(SOURCES) $(CFLAGS) -o $@

run:
	make 