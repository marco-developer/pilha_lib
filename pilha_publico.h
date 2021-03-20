typedef struct stack pilha;

pilha *createStack(int capacity, int size);
// void freeStack(pilha P);
void push(pilha *s, void *src);
void pop(pilha *s, void *dst);