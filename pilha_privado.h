#include "pilha_publico.h"

typedef struct stack {
  int capacity; // Quantidade de itens disponível
  int size; // Tamanho de cada item
  int length; // Quantidade de itens usados
  void *data; // Ponteiro pra memória
} pilha;

// int Cheia(pPilha p);
// int Vazia(pPilha p);