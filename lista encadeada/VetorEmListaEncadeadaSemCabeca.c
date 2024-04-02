#include <stdio.h>
#include <stdlib.h>

struct cel {
    int conteudo;
    struct cel *seg; //seguinte
};

typedef struct cel celula;

void insere(celula *lst, int x) {
    celula *novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = lst->seg;
    lst->seg = novo;
}

celula *primeiroelemento(celula *prox, int x) {
    celula *novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = prox;
    return novo;
}


void imprimirLista(celula *lst) {
    celula *temp;
    for (temp = lst; temp != NULL; temp = temp->seg) {
        printf("%d ", temp->conteudo);
    }
    printf("\n");
}

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    celula *lista = NULL;
    lista = primeiroelemento(lista, vetor[0]);

    for (int i = 1; i < 5; i++) {
        insere(lista, vetor[i]);
    }

    imprimirLista(lista);
    return 0;
    
}


