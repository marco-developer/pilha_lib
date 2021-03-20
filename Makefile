SHELL=/bin/sh
CC=gcc
CFLAGS=-O3 -g

default:	aplicacao

pilha.o:	pilha.c pilha_publico.h pilha_privado.h
	$(CC) $(CFLAGS) -c pilha.c -o pilha.o

aplicacao:	aplicacao.c aplicacao.o pilha.o
	$(CC) $(CFLAGS) aplicacao.c pilha.o -o aplicacao

#ajuste:	ajuste.c ajuste.h pilha.o
#	$(CC) $(CFLAGS) ajuste.c pilha.o -o ajuste

clean:	
	rm -f aplicacao  *.o core a.out 

all:	aplicacao