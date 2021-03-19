#include "stdio.h"
#include "stdlib.h"
#include "pilha_publico.h"

int main(int argc, char *argv[]) {
    
    pPilha P;
    int ret=0;
    int valor=0;
    int *arg;

    if (argc <1) {
        printf ("ERRO: ./aplicacao <inteiro> <inteiro> ... \n");
        return 1;
    }

     arg = (int*) malloc(sizeof(int)*(argc-1));
     printf ("Preparando para criar pilha...\n");
     criapilha(&P, argc-1, sizeof(int));

    // if (!ret) {
    //     printf ("ERRO cria pilha!\n");
    //     return 1;
    // }

    for (int i=0; i<argc-1; i++) {
        arg[i] = atoi(argv[i+1]);
        empilha(P, &arg[i]);
        printf ("(%d)\n", arg[i]);
    }
    printf ("\n");

    for (int i=0; i<argc-1; i++) {
        
        topo(&P);
        // if (!ret)
        //     printf ("ERRO topo ...\n");
        // else
        //     printf ("OK topo %d\n", valor);

	    desempilha(&P);
        if (!ret)
            printf ("ERRO desempilha ...\n");
        else
            printf ("OK desempilha %d\n, valor");

    }
}