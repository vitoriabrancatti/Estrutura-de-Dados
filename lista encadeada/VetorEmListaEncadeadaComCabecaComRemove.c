#include <stdio.h>
#include <stdlib.h>

struct cel {
    int conteudo;
    struct cel *seg; //seguinte
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

    celula *p = lst;
    while (p->seg != NULL) {
        p = p->seg; 
    }
    p->seg = novo; 
}

void removendo(celula *lst) {
    celula *lixo;
    lixo = lst->seg;
    lst->seg = lixo->seg;
    free(lixo);
}

celula *buscar(celula *lst, int x) {
    celula *p = lst;
    while (p->seg != NULL && p->seg->conteudo != x)
    {
        p = p->seg;
    }
    return p;  

}

void imprimirLista(celula *lst) {
    celula *p;
    for (p = lst->seg; p != NULL; p = p->seg) {
        printf("%d ", p->conteudo);
    }
    printf("\n");
}

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    celula *lista = criarLista();

    for (int i = 0; i < 5; i++) {
        insere(lista, vetor[i]);
    }

    removendo(buscar(lista, 20));
    imprimirLista(lista);
    return 0;
    
}


