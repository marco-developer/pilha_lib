#include "stdio.h"
#include "stdlib.h"
#include <string.h> 
#include "pilha_privado.h"

pilha *createStack(int capacity, int size) {

  printf ("Alocando pilha...\n");
  pilha *res = malloc(sizeof(pilha));
  if (!res) {
    printf("Erro ao criar pilha!\n");
    exit(1);
  }
  res->capacity = capacity;
  res->size = size;
  res->position = 0;
  
  printf ("Alocando dados\n");
  if (!(res->data = malloc(capacity * size))) {
    printf("Erro ao criar pilha!\n");
    exit(1);
  };

  return res;

}

int freeStack(pilha *s) {

  if (!s) {
    printf("Pilha não alocada!!\n");
    return 1;
  } else {
    free(s->data);
    free(s);
    return 0;
  }
}

int push(pilha *s, void *src) {
  if (!s) {
    printf("Pilha não alocada!!\n");
    return 1;
  }
  // Calcula a posição
  if(cheia(s)==0){
    printf("Impossivel inserir mais elementos, pilha cheia!!\n");
    return 1;
  } else {
    int pos = s->position * s->size;
    // Copia a memória...
    memcpy(s->data + pos, src, s->size);
    // Aumenta o tamanho...
    s->position++;
    return 0;
  }
}

int pop(pilha *s, void *dst) {
  
  if (!s) {
    printf("Pilha não alocada!!\n");
    return 1;
  }

  if(vazia(s)==0){
    printf("Não há mais elementos para remover!\n");
    return 1;
  } else {
    // Diminui o contador...
    s->position--;
    // Calcula...
    int pos = s->position * s->size;
    // Copia...
    memcpy(dst, s->data + pos, s->size);
    return 0;
  }
  
}

int cheia(pilha *s) {
  if(s->position==s->capacity) return 0;
  else return 1;
}

int vazia(pilha *s) {
  if(s->position==0) return 0;
  else return 1;
}

int limpa(pilha *s) {
  if (!s) {
    printf("Pilha não alocada!!\n");
    return 1;
  }

  if(s->position==0){ 
    printf("A pilha já está vazia!\n");
    return 2;
  } else {
    printf("Limpando pilha... \n");
    s->position = 0;
    return 0;
  }
}

int topo(pilha *s, void *el) {

  if (!s) {
    printf("Pilha não alocada!!\n");
    return 1;
  }

  if(vazia(s)==0){
    printf("Não há elementos na pilha!\n");
    return 1;
  } else {
    // Calcula...
    int valor = s->position - 1;
    int pos = valor * s->size;
    // Copia...
    memcpy(el, s->data + pos, s->size);
    return 0;
  }
}