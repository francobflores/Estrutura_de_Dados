#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;

    printf("Endereço de a = %p\nConteúdo de a = %d \n", &a , a);
    printf("Endereço de p1 = %p\nPara onde p1 está apontando = %p \nConteúdo que o endereço que p1 está apontando guarda: %d\n", &p1, p1, *p1);
    printf("Endereço de p2 = %p\nPara onde p2 está apontando = %p \nConteúdo que o endereço que p2 está apontando guarda: %p\nConteúdo do conteudo que o ponteiro p2 está apontando: %d\n\n\n", &p2, p2, *p2, **p2);

    //modificando conteúde de a atraves de ponteiro de ponteiro

    **p2 = 99;
    
    printf("Endereço de a = %p\nConteúdo de a = %d \n", &a , a);
    printf("Endereço de p1 = %p\nPara onde p1 está apontando = %p \nConteúdo que o endereço que p1 está apontando guarda: %d\n", &p1, p1, *p1);
    printf("Endereço de p2 = %p\nPara onde p2 está apontando = %p \nConteúdo que o endereço que p2 está apontando guarda: %p\nConteúdo do conteudo que o ponteiro p2 está apontando: %d\n", &p2, p2, *p2, **p2);

    return 0;
}

