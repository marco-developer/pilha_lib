#include "stdio.h"
#include "stdlib.h"
#include <string.h> 
#include "pilha_privado.h"

pilha *createStack(int capacity, int size) {
  printf ("Alocando pilha...\n");
  pilha *res = malloc(sizeof(pilha));
  res->capacity = capacity;
  res->size = size;
  res->length = 0;
  printf ("Alocando dados\n");
  res->data = malloc(capacity * size);
  return res;
}

void freeStack(pilha *P) {
  free(P->data);
  free(P);
}

void push(pilha *s, void *src) {
  // Calcula a posição
  if(s->length==s->capacity)
    printf("Impossivel inserir mais elementos, pilha cheia!!\n");
  else {
    int pos = s->length * s->size;
    // Copia a memória...
    memcpy(s->data + pos, src, s->size);
    // Aumenta o tamanho...
    s->length++;
  }
}

void pop(pilha *s, void *dst) {
  
  if(s->length==0)
    printf("Não há mais elementos para remover!\n");
  else {
    // Diminui o contador...
    s->length--;
    // Calcula...
    int pos = s->length * s->size;
    // Copia...
    memcpy(dst, s->data + pos, s->size);
  }
  
}

int cheia(pilha *s) {
  if(s->length==s->capacity) return 1;
}

int vazia(pilha *s) {
  if(s->length==0) return 1;
}