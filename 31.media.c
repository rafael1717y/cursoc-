#include <stdio.h>

int main() 
{
    float n1, n2, n3, n4, n5;
    float media;
    n1 = 4;
    n2 = 5.6;
    n3 = 7.9;
    n4 = 0.79;
    n5 = 6;

    media = (n1 + n2 + n3 + n4 + n5) / 5;
    printf("A média dos 5 alunos é: %.2f\n", media);
    return 0;
}