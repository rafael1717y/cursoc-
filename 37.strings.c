#include <stdio.h>
#include <string.h>

/*
\0 indica término de string. Informa o término da string.
Tamanho da string é diferente do tamanho do vetor.
strlen(vetor), strcat(vetor_1, vetor_2)

/* 
v1 = "abc"  v2 = "de"
strcat(v1, v2) => v1 = "abcde"
strcpy(v1, v2) -> copia de v2 para v1
strcmp(v1, v2) -> compara o conteúdo de v1 com v2 e retorna 0 se forem iguais e algo dif. de 0 se diferentes.
----------------> Não usar if(v1 == v2) porque nesse caso está se comparando endereços que provavelmente serão diferentes.
*/

int main() {
    int tam;
    char v[100], p[100];
    scanf("%s", v); //endereço inicial do vetor. Scanf só funciona bem quando não há espaço na string.
    scanf("%p", p); //printf("String lida é: %s\n", v);  //gets(v); // para ler strings separadas...
    strcat(v, p);
    printf("String concatenada é: %s\n", v);
    printf("String lida é: %s\n", v);
    printf("String lida é: %s\n", p);
    
    tam = strlen(v);
    printf("O tamanho do vetor é: %d\n", tam);
        
    if(!strcmp(p, v)) {
        printf("Iguais\n");
    }

    return 0;
}
