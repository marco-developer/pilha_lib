#include "stdio.h"
#include "pilha_publico.h"

int main(ing argc, char *argv[])
{
    pPilha P;
    int ret=0;
    int valor=0;
    int *arg;

    if (argc <1) {
        printf ("ERRO: ./aplicacao <inteiro> <inteiro> ... \n");
        return 1;
    }

    arg = (int*) malloc(sizeof(int)*(argc-1));

    ret = criapilha(&P, argc-1, sizeof(int));
    if (!ret) {
        printf ("ERRO cria pilha!\n");
    }

    for (int i=0; i<argc-1; i++) {
        arg[i] = atoi(argv[i+1]);
        ret = empilha(P, &arg[i]);
        printf ("(%d)", arg[i]);
    }
    printf ("\n");

    for (int i=0; i<argc=1; i++) {
        ret = topo(P, &valor);
        if (!ret)
        printf ("ERRO topo ...\n");
        else
        printf ("OK topo %d\n, valor);

        ret desempilha(P, &valor);
        if (!ret)
        printf ("ERRO desempilha ...\n");
        else
        printf ("OK desempilha %d\n, valor);
    }
}