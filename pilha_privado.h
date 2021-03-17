#include "pilha_publico.h"

struct PE
{
    int topo;
    int tmax;
    int tinfo;
    void **dados;

};

int Cheia(pPilha p);
int Vazia(pPilha p);