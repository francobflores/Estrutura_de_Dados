#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int a = 10;
    int *p1 = NULL;
    //int *p2;
    int *p2 = NULL; // sempre instanciar o ponteiro para não cometer erro lógico.

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p\n", &p1, p1); /* %p para imprimir p1 e p2 pois o valor guardado
    neles são endereções de memória.
    */
    printf("&p2 = %p, p2 = %p\n\n", &p2, p2);

    p1 = &a;
    p2 = p1;
    *p2 = 4; // o conteúdo do endereço que está em p2 é alterado para 4.

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, *p1 = %d, p1 = %p\n", &p1, *p1, p1);  //*p1 o conteudo do endereço armazenado nesse ponteiro.
    printf("&p2 = %p, *p2 = %d, p2 = %p\n\n", &p2, *p2, p2);

// tentando usar emoji


    return 0;
}