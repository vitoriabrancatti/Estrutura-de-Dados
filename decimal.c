#include <stdio.h>

int findbinary(decimal) {
    if (decimal > 0) {
        findbinary(decimal/2);
        printf("%d", decimal % 2);
    
    }

}
int main()
{
    int decimal = 10;
    findbinary(decimal);
    return 0;
    
   
}

