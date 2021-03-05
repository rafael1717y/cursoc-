#include "stdio.h"

//Bloco if em diretivas em tempo de compilação
#define minha_DIR 4
//não trabalhamos com ; na diretiva. Altera td na compilação do código. Dif conste
//que acontece na execução;

#ifdef MINHA_DIR
    // ...
#endif

//#undef MINHA_DIR  //remove a definição feita anteriormente

#if MINHA_DIR == 3
    #define MINHA_DIR_2 2
#elif MINHA_DIR == 4
    #include 'stlib.h'
#else  
    #define MINHA_DIR_3 3
#endif

int meuIntGlobal;

void meuOutroMetodo(){
    meuIntGlobal++;
}

void meuMetodoEstatico(){
    int static minhaVarEstatica = 10;
    //linha acima não é executada na segunda chamada pq a var já está disponível
    
    minhaVarEstatica++;

    printf("%d ", minhaVarEstatica);
}


int main() {
    char *c;
    int volatile meuInt = 10;
    //int meuInt;
    //meuInt = 10;

    double const meuDouble = 25.75; //declarar na msm linha da atribuição
    char meuChar = 'd';
    float meuFloat = 10.15;
    int a, b;
    int register minhaVarRegister; //aloca a var no meio mais rápido do computador
    
    //Enumerações
    enum estacoes {verao, outono, inverno, primavera};
    enum estacoes minhaEstacao;



    printf("%d ", meuInt);
    printf("%f ", meuDouble);
    printf("%c ", meuChar);
    printf("%f ", meuFloat);
    
    meuIntGlobal = 5;
    meuOutroMetodo();
    //a = b = 10;
    //b = 15;
    //printf("a: %d, b: %d \n", a,b );


    printf("%d \n", meuIntGlobal);
    meuMetodoEstatico();
    meuMetodoEstatico();
    meuMetodoEstatico();

    minhaEstacao = verao;
    minhaEstacao = outono;

    if (minhaEstacao == verao) {
        printf("calor ");
    }
    //scanf("%c", &c);
    
    a = 10;
    b = 3;

    a = 2 + 2 * (3 + 3);
    a+= 10;   
    a*=2;

    a = a / 5;//48 / 5 => 

    meuFloat = (float)48/5;
    printf("%f \n", meuFloat);

    
    printf("\n %d \n", a);

    meuFloat = 48;
    meuFloat /= 5;
    printf("%f \n", meuFloat);

    meuFloat = 10;
    meuFloat *= minha_DIR;
    printf("%f \n", meuFloat);

    //#line 5
    printf("\n Linha: %d do arquivo %s \n", __LINE__, __FILE__);
    //printf("%d", MINHA_DIR_3);

    #error PROCEDIMENTO INACABADO (RAFAEL GOMES) //bloqueia a compilação do código

    return 0;
}




