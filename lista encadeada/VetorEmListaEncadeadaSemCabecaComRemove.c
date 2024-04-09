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
celula *buscar(celula *lst, int x) {
    celula *p = lst;
    while (p->seg != NULL && p->seg->conteudo != x)
    {
        p = p->seg;
    }
    return p;  

}

void removendo(celula **lst, int x) {
    celula *ant = buscar(*lst, x);
    celula *lixo = ant->seg;
    ant->seg = lixo->seg;
    free(lixo);
}

celula *primeiroelemento(celula *prox, int x) {
    celula *novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = prox;
    return novo;
}


void imprimirLista(celula *lst) {
    celula *p;
    for (p = lst; p != NULL; p = p->seg) {
        printf("%d ", p->conteudo);
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

    removendo(&lista, 20);
    imprimirLista(lista);
    return 0;
    
}


