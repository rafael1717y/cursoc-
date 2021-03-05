#include "stdio.h"
#include "stdlib.h"


void somaUmNormal(int i){
    i = i +1;
}

void somaumPonteiro(int *i) {
    *i = *i + 1;
}

int main() {
    char *c;

    int a, b;
    int *pi = NULL; //ponteiro iniciado com null
    int **ppi = NULL;
    int *matrizInteiro;
    int matrizSemPonteiro[5] = {2, 4, 6, 8, 10};

    //Uso Tradicional
    a = 5;
    b = a;
    printf("\n a = %d, b = %d", a, b);

    a = 5;
    b = a;
    a = 8;
    printf("\n a = %d, b = %d", a, b);

    a = b = 5;
    a = 8;
    printf("\n a = %d, b = %d", a, b);
    printf("\n a = %d (%d), b = %d (%d)", a, &a, b, &b);

    //Ponteiro
    a = 5;
    pi = &a;
    a = 8;
    printf("\n a = %d, b = %d", a, pi);
    printf("\n a = %d, b = %d", a, *pi); //impressao do valor do ponteiro
    
    //Ponteiro para ponteiro
    a = 5;
    pi = &a; // ponteiro aponta para o endereço de a
    ppi = &pi; // ponteiro para ponteiro armazena o end comercial apontado pelo end anterior

    printf("\n a = %d, pi = %d, ppi = %d", a, *pi, **ppi);
    printf("\n a = %d, pi = %d, ppi = %d", a, *pi, *ppi);


    //Passagem por valor
    a = 5;
    somaUmNormal(a);
    printf("\n Soma normal: a = %d", a) ;


    //Passagem por referência - passa um apontamento de reg memória que será usada na função --- alterando...
    a = 5;
    somaumPonteiro(&a);
    printf("\n Soma normal: a = %d", a) ;

    //Alocação dinâmica de memória
    matrizInteiro = (int *) malloc(5 * sizeof(int)); // tamanho de bytes ocupado pelo tipo int * 5 e alocará uma regiao desse tamanho na memória
    if(!matrizInteiro) {
        printf("Erro");
    }

    matrizInteiro[0] = 5;
    matrizInteiro[1] = 10;
    printf("\n Posicao [0] = %d, posicao [1] = %d", matrizInteiro[0], matrizInteiro[1]);

    free(matrizInteiro); //liberando a memória

    //Aritmética de ponteiro
    pi = &matrizSemPonteiro[0]; //apontando para o end de memória da matriz sem ponteiro  na posição 0.
    printf("\n pi vale agora: %d", *pi);
    pi++; 
    printf("\n pi vale agora: %d", *pi); //qdo soma 1 por ++ aponta para a próxima regiao de memória de msm tipo base.

    pi = pi + 2;
    printf("\n pi vale agora: %d", *pi); //8 

}