typedef struct stack pilha;

pilha *createStack(int capacity, int size);
int freeStack(pilha *s);
int push(pilha *s, void *src);
int pop(pilha *s, void *dst);
int topo(pilha *s, void *el);
int limpa(pilha *s);