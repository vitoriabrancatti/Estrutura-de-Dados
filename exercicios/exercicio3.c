#include <stdio.h>

int pell(int n) {
    if (n <= 1)
        return n;
    else
        return (2 * pell(n - 1)) + pell(n - 2);
}

int main() {
    int n = ;
    printf("A posicao do N-esimo: %d", n);
    printf("\nO valor do calculo de pell: %d", pell(n));
    return 0;
}