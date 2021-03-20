#include "stdio.h"
#include "stdlib.h"
#include "pilha_publico.h"

int main(int argc, char *argv[]) {
    
    pilha *P;
    int *arg;
    int tamdado;
    void *removido;
    int nroElementos;
    void *insere;

    printf ("Informe o tamanho do dado: \n");
    scanf ("%i", &tamdado);

    printf ("Informe o numero de elementos: \n");
    scanf ("%i", &nroElementos);
    

    printf ("Preparando para criar pilha...\n");
    P = createStack(nroElementos, sizeof(tamdado));
    printf ("Pilha criada.\n");


    printf ("Iniciando empilhamento...\n\n");
    for(int i=0;i<nroElementos;i++){
        printf ("Digite o valor a inserir: \n");
        scanf ("%d", &insere);
        push(P, &insere);
    }

    printf ("Iniciando desempilhamento...\n\n");

    for(int i=0;i<nroElementos;i++){    
        pop(P, &removido);
        printf ("Item removido: %d\n", removido);
    }

     // freeStack(P);


}