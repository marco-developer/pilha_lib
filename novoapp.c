#include "stdio.h"
#include "stdlib.h"
#include "pilha_publico.h"

int main(int argc, char *argv[]) {

    int menu, nroElementos, insere, remove, top, tela;
    pilha *P;

    tela = 1;
    P = NULL;

    do {
        printf ("Escolha o comando: \n(1)-Criar pilha\n(2)-Adicionar elemento\n(3)-Remover elemento\n(4)-Ver topo\n(5)-Limpar pilha\n(6)-Desalocar pilha \n(7)-Sair\n");
        scanf ("%d", &menu);
            
        switch (menu) {
            case 1:
                printf ("Informe o numero de elementos: \n");
                scanf ("%d", &nroElementos);
                printf ("Preparando para criar pilha...\n");
                P = createStack(nroElementos, sizeof(int));
                printf ("Pilha criada.\n");
            break;

            case 2:
                printf ("Iniciando empilhamento...\n\n");
                printf ("Digite o valor a inserir: \n");
                scanf ("%d", &insere);
                push(P, &insere);
            break;

            case 3:
                printf ("Iniciando desempilhamento...\n\n");
                pop(P, &remove);
                printf ("Item removido: %d\n", remove);
            break;

            case 4:
                top = 0;
                topo(P, &top);
                printf ("Item no topo: %d\n", top);
            break;

            case 5:
                limpa(P);
            break;

            case 6:
                freeStack(P);
            break;

            case 7:
                exit(1);
        }
    printf("Nro. de elementos max da pilha %d\n", nroElementos);
    } while(tela);
}
        