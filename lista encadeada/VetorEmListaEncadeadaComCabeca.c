#include <stdio.h>
#include <stdlib.h>

struct cel {
    int conteudo;
    struct cel *seg; //seguinte
};

typedef struct cel celula;

celula* insere(celula *lst, int x) {
    celula *novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = lst->seg;
    lst->seg = novo;
    return lst;
}

void imprimirLista(celula *lst) {
    celula *t;
    for (t = lst->seg; t != NULL; t = t->seg) {
        printf("%d ", t->conteudo);
    }
    printf("\n");
}

int main() {
    celula *lista = malloc(sizeof(celula));
    lista->seg = NULL; // Cabeça

    int vetor[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        lista = insere(lista, vetor[i]);
    }

    imprimirLista(lista);

    celula *t;
    for (t = lista; lista != NULL; t = lista) {
        lista = lista->seg;
        free(t);
    }

    return 0;
}
