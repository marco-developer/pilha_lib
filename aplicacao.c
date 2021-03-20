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

    printf ("Escolha o tipo de dado: \n(1)-int\n(2)-char\n(3)-string \n");
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
        P = createStack(nroElementos, sizeof(char));
        printf ("Pilha criada.\n");

        printf ("Iniciando empilhamento...\n\n");
        for(int i=0;i<nroElementos;i++){
            printf ("Digite o valor a inserir: \n");
            scanf (" %c", &insere);
            push(P, &insere);
        }
        
        printf ("Iniciando desempilhamento...\n\n");
        for(int i=0;i<nroElementos;i++){    
            pop(P, &remove);
            printf ("Item removido: %c\n", remove);
        }
        break;

        case 3:
        printf ("Preparando para criar pilha...\n");
        int tamstring;
        printf ("Tamanho da string: \n");
        scanf ("%d", &tamstring);
        P = createStack(nroElementos, sizeof(tamstring));
        printf ("Pilha criada.\n");

        printf ("Iniciando empilhamento...\n\n");
        for(int i=0;i<nroElementos;i++){
            printf ("Digite o valor a inserir: \n");
            scanf ("%s", &insere);
            push(P, &insere);
        }
        
        printf ("Iniciando desempilhamento...\n\n");
        for(int i=0;i<nroElementos;i++){    
            pop(P, &remove);
            printf ("Item removido: %s\n", remove);
        }
        break;
    }

     freeStack(P);


}