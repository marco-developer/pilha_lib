SHELL=/bin/sh
CC=gcc
CFLAGS=-O3 -g

default:	novoapp

pilha.o:	pilha.c pilha_publico.h pilha_privado.h
	$(CC) $(CFLAGS) -c pilha.c -o pilha.o

novoapp:	novoapp.c novoapp.o pilha.o
	$(CC) $(CFLAGS) novoapp.c pilha.o -o novoapp

clean:	
	rm -f novoapp  *.o core a.out 

all:	novoapp