#include "stdio.h"
#include "stdlib.h"
#include "pilha_privado.h"

int criapilha(ppPilha pp, int tamanhoVetor, int tamanhoInfo){

    pp->topo = -1;
    pp->tmax = tamanhoVetor;
    pp->tinfo = tamanhoInfo;
    pp->dados = void* malloc (tamanhoVetor * sizeof(tamanhoInfo));
    
    return 0;
}

int destroipilha(ppPilha pp);

int empilha(pPilha p, void *elemento) {
    
    p->topo++;
    p->dados [p->topo] = *elemento;

}

int desempilha( pPilha p, void *elemento) {

    void* aux = p->dados [p->topo];
    p->topo--;

    return aux;
}

int reiniciapilha(pPilha p);