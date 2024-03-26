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
    novo->seg = NULL;
    celula *temp;

    temp->seg = novo;
    return lst;
}

void imprimirLista(celula *lst) {
    celula *temp;
    for (temp = lst; temp != NULL; temp = temp->seg) {
        printf("%d ", temp->conteudo);
    }
    printf("\n");
}

int main() {
    celula *lista = NULL;

    int vetor[5] = {10, 20, 30, 40, 50};

    lista = malloc(sizeof(celula));
    lista->conteudo = vetor[0];
    lista->seg = NULL;

    celula *ultimo = lista; 

    for (int i = 1; i < 5; i++) {
        celula *novo = malloc(sizeof(celula));

        novo->conteudo = vetor[i];
        novo->seg = NULL;

        ultimo->seg = novo; 
        ultimo = novo;
    }

    imprimirLista(lista);

    return 0;
}


