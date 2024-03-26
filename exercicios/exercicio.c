#include <stdio.h>
int soma(numero) {
    if (numero == 0) {
        return 0;
    }
    else {
        return numero + soma(numero - 1);
    }
}

int main(){
    int numero = 5;
    soma(numero);
    printf("%d", soma(numero));
    return 0;
}