#include <stdio.h>

int main() {
    int v[10];
    int i, j, aux;

    for(i = 0; i < 10; i++) {
        printf("Digite o %d.valor:", i+1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 9; i++) {
        for (j= i+1; j< 10; j++) {
            //printf("%d %d\n", i, j); //imprimindo os pares dos elementos do vetor
            if (v[i] > v[j]) { // realiza a troca caso v[i] seja maior do que v[j]
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for(i = 0; i< 10; i++) {
        printf("%d\n", v[i]);
    }
    
    return 0;
}
