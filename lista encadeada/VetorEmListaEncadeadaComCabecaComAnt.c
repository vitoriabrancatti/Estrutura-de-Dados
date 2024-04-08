#include <stdio.h>
#include <stdlib.h>

struct cel {
    int conteudo;
    struct cel *seg; //seguinte
    struct cel *ant; //anterior
};

typedef struct cel celula;

celula *criarLista() {
    celula *cabeca = malloc(sizeof(celula));
    cabeca->seg = NULL; 
    return cabeca;
}

void insere(celula *lst, int x) {
    celula *novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = NULL;

    celula *temp = lst;
    while (temp->seg != NULL) {
        temp = temp->seg; 
    }
    temp->seg = novo; 
}

void insereAntes(celula *lst, int x){
    celula *novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = lst->seg;
    lst->seg = novo;
}

void imprimirLista(celula *lst) {
    celula *temp;
    for (temp = lst->seg; temp != NULL; temp = temp->seg) {
        printf("%d ", temp->conteudo);
    }
    printf("\n");
}

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    celula *lista = criarLista();

    for (int i = 0; i < 5; i++) {
        insere(lista, vetor[i]);
    }

    insereAntes(lista, 5);
    imprimirLista(lista);
    return 0;
    
}


