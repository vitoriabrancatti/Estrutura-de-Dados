#include <stdio.h>

void sub (int *pa, int *pb){
	*pa = *pa - *pb;
	*pb+=1;
}

void main(){
    int A = 10;
    int B = 30;

    int *p; //declaração de ponteiro
    p = &A; // & endereço de variável

    int **pp;
    pp = &p;

    printf("%p\n",*pp); //5x400
    printf("%i\n",**pp); //11

    sub(&B, &A);

    printf("%i\n",A); //11
    printf("%p\n",&A); //5x400
    printf("%p\n",p); //5x400
    printf("%i\n",*p); //11
    printf("%p\n",&p); //4x200

	int *pa;
	pa = malloc(sizeof(int));
	*pa = 100;

	free(pa);
}