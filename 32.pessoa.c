#include <stdio.h>

int main() {
    /* declaração de variáveis */ 
    float altura, peso;
    int idade;
    int eh_fumante; //boleano

    altura = 1.80;
    peso = 73;
    idade = 24;
    eh_fumante = 0; //não é fumante. Em C, tudo que é 0 é falso e diferente de 0 é verdade.
    printf("Altura: %.1f metros \n", altura);
    printf("Peso: %.2f quilos \n", peso);
    printf("Peso: %d anos \n", idade);

    if(eh_fumante == 0) {
        printf("Não é fumante \n");
    } else {
        printf("É fumante \n");
    }
    return 0;
}


//Casting
// x = (float(44)/3); = 14.66 - ok
// x = 44/(float)3; -- ok
// x = (float) (44/3); == incorreto


//x = 2;
//y = x++;
//y = 2
//x = 3

//x = 2;
//y = ++x;
//x=3;
//y=3;

//Precedência de operadores
/*

()[]++
!~
*-
+-
<<= >>=

*/










