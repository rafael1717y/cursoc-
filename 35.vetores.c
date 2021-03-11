#include <stdio.h>
/* 
Compara os valores digitados pelo usuário e imprime o menor e maio valor
*/

int main() {
    float v[10];
    int i;
    float maior, menor;

    for(i = 0; i< 10; i++) {
        printf("Digite o %do. valor:", i+1);
        scanf("%f", &v[i]);
    }
    maior = v[0];
    menor = v[0];

    for(i = 1; i < 10; i++) {
        if (v[i] > maior) 
        maior = v[i];
        if (v[i] < menor) 
        menor = v[i];
    }

    printf("Maior: %f.1\nMenor:%f.1\n", maior, menor);

    return 0;
}










 