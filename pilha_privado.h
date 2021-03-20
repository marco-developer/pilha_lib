#include "pilha_publico.h"

typedef struct stack {
  int capacity; // Quantidade de itens disponível
  int size; // Tamanho de cada item
  int length; // Quantidade de itens usados
  void *data; // Ponteiro pra memória
} pilha;

int cheia(pilha *p);
int vazia(pilha *p);