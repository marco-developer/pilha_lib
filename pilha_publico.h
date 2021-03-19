typedef struct PE *pPilha, **ppPilha;

void criapilha(ppPilha pp, int tamanhoVetor, int tamanhoInfo);
int destroipilha(ppPilha pp);

void empilha(pPilha p, void *elemento);
void desempilha(pPilha p);

int reiniciapilha(pPilha p);
void topo(pPilha p);