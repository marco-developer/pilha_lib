#include "stdio.h"
#include "stdlib.h"
#include "pilha_publico.h"

int main(int argc, char *argv[]) {
    
    pilha *P;
    // int *arg;
    // int tamdado;
    int menu;
    int nroElementos;
    void *insere;
    void *remove;
    

    // printf ("Informe o tamanho do dado: \n");
    // scanf ("%d", &tamdado);

    printf ("Informe o numero de elementos: \n");
    scanf ("%d", &nroElementos);
    

    // printf ("Preparando para criar pilha...\n");
    // P = createStack(nroElementos, sizeof(tamdado));
    // printf ("Pilha criada.\n");
    // printf ("Iniciando empilhamento...\n\n");

    printf ("Escolha o tipo de dado: (1)-int, (2)-float \n");
    scanf ("%d", &menu);
    
    switch (menu) {
        case 1:
        printf ("Preparando para criar pilha...\n");
        P = createStack(nroElementos, sizeof(int));
        printf ("Pilha criada.\n");

        printf ("Iniciando empilhamento...\n\n");
        for(int i=0;i<nroElementos;i++){
            printf ("Digite o valor a inserir: \n");
            scanf ("%d", &insere);
            push(P, &insere);
        }

        printf ("Iniciando desempilhamento...\n\n");
        for(int i=0;i<nroElementos;i++){    
            pop(P, &remove);
            printf ("Item removido: %d\n", remove);
        }
        break;
        
        case 2:
        printf ("Preparando para criar pilha...\n");
        P = createStack(nroElementos, sizeof(float));
        printf ("Pilha criada.\n");

        printf ("Iniciando empilhamento...\n\n");
        for(int i=0;i<nroElementos;i++){
            printf ("Digite o valor a inserir: \n");
            scanf ("%f", &insere);
            push(P, &insere);
        }
        
        printf ("Iniciando desempilhamento...\n\n");
        for(int i=0;i<nroElementos;i++){    
            pop(P, &remove);
            printf ("Item removido: %f\n", remove);
        }
        break;
    }

    // for(int i=0;i<nroElementos;i++){
    //     printf ("Digite o valor a inserir: \n");
    //     scanf ("%d", &insere);
    //     push(P, &insere);
    // }

    // printf ("Iniciando desempilhamento...\n\n");

    // for(int i=0;i<nroElementos;i++){    
    //     pop(P, &removido);
    //     printf ("Item removido: %d\n", removido);
    // }

     // freeStack(P);


}