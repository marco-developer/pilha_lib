#include "pilha_publico.h"

typedef struct stack {
  int capacity; // Quantidade de itens disponíveis
  int size; // Tamanho de cada item
  int position; // Quantidade de itens usados
  void *data; // Ponteiro pra memória
} pilha;

int cheia(pilha *s);
int vazia(pilha *s);