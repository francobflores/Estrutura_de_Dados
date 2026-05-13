#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int a ;

    printf("tamanho da variavel a = %ld bytes\n", sizeof(a));
    printf("tamanho de um int = %ld bytes\n",sizeof(int));
    printf("tamanho de um short = %ld bytes\n",sizeof(short));
    printf("tamanho de um long = %ld bytes\n",sizeof(long));
    printf("tamanho de um long long = %ld bytes\n",sizeof(long long));
    printf("tamanho de um unsigned int = %ld bytes\n",sizeof(unsigned int));
    printf("tamanho de um char = %ld bytes\n",sizeof(char));
    printf("tamanho de um float = %ld bytes\n",sizeof(float));
    printf("tamanho de um double = %ld bytes\n",sizeof(double));
    printf("tamanho de um int * = %ld bytes\n",sizeof(int *));
    printf("tamanho de um char * = %ld bytes\n",sizeof(char *));
    printf("tamanho de um float* = %ld bytes\n",sizeof(float *));    
    return 0;
}