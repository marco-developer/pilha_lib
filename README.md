# Biblioteca de pilhas V 0.1
Projeto e análise de algoritmos  
UDESC Joinville  

# Funções disponíveis  
Todas as funções retornam 0 quando são bem sucedidas ou 1 caso falhem.


- pilha * createStack(int capacity, int size): Cria e aloca memória para pilha de _capacity_ elementos de tamanho _size_.  
Exemplo:  
pilha *P;  
P = createStack(10, sizeof(int));  
  
- void freeStack(pilha * P): Libera memória da pilha _P_.  
Exemplo:  
 freeStack(P);   

- void push(pilha * s, void * src): Insere elemento _src_ na pilha _s_.  
Exemplo:  
 push(P, &valor);  
 
- void pop(pilha * s, void * dst): Remove e devolve em _dst_ o elemento do topo da pilha _s_.  
Exemplo:  
 pop(P, &valor);  
 
 - int topo(pilha * s, void * el): Devolve em _el_ o elemento no topo da pilha _s_.
Exemplo:  
 topo(P, &valor);  
 
 - void limpa(pilha * s): Reinicia a pilha _s_.  
 
 - int cheia(P) e int vazia(P): Retorna 1 se a pilha está cheia/vazia ou 0 se não está.  
