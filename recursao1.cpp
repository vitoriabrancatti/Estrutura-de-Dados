#include <stdio.h>

int main() {
    recursao(5);
    return 0;
}
void recursao(int n) {
    if (n > 0) {
        printf("%d\n", n);
        recursao(n - 1);
        printf("%d\n", n);
    }
    
        
}