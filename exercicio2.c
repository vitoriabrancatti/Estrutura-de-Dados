#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;
    printf("A posicao do N-esimo: %d", n);
    printf("\nO valor do calculo de fibonacci: %d", fibonacci(n));
    return 0;
}