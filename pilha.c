#include "stdio.h"
#include "stdlib.h"
#include <string.h> 
#include "pilha_privado.h"

// pra criar, você teria que fazer duas alocações

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

// void freeStack(pilha P) {
//   free(&P);
// }

// pra adicionar um item, precisa copiar a memória...

void push(pilha *s, void *src) {
  // Calcula a posição
  int pos = s->length * s->size;
  // Copia a memória...
  memcpy(s->data + pos, src, s->size);
  // Aumenta o tamanho...
  s->length++;
}

// pra pegar um objeto...

void pop(pilha *s, void *dst) {
  // Diminui o contador já...
  s->length--;
  // Calcula...
  int pos = s->length * s->size;
  // Copia...
  memcpy(dst, s->data + pos, s->size);
}