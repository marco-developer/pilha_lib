#include "stdio.h"
#include "stdlib.h"
#include "pilha_privado.h"

int criapilha(ppPilha pp, int tamanhoVetor, int tamanhoInfo){

    pp = (pPilha*) malloc (tamanhoVetor * sizeof(pPilha));
    printf ("OK entrou\n");
    (**pp).topo = -1;
    printf ("OK topo %d\n", (**pp).topo);
    (**pp).tmax = tamanhoVetor;
    printf ("OK tamvet %d\n", (**pp).tmax);
    (**pp).tinfo = tamanhoInfo;
    printf ("OK taminfo %d\n", (**pp).tinfo);
    (**pp).dados = (void*) malloc (sizeof(tamanhoInfo));
    printf ("OK dados\n");
    
    return 0;
}

int destroipilha(ppPilha pp) {
    
    free(pp);

    return 0;

}

int empilha(pPilha p, void *elemento) {
    
    printf ("entrou empilha\n");
    p->topo++;
    printf ("OK topo++ %d\n", p->topo);
    p->dados [p->topo] = elemento;

}

int desempilha( pPilha p, void *elemento) {

    p->topo--;

    return 0;
}

int reiniciapilha(pPilha p) {

}

int *topo(pPilha p) {
    
    int aux;

    aux = (p->dados [p->topo - 1]);
    return aux;
}