#include <stdio.h>
/* 
printf("string de controle", variaveis)

%c = caractere
%d = inteiro
%e = notação científica
%s = string
%% = escreve o símbolo %
%x = hexadecimal

scanf("string de controle", lista de variáveis);
A string de controle pode conte especificadores de formato

scanf("%d", &num);
-----leia um número --- e armazena essa variável
scanf("numero %d", %num);

*/

int main() {
    int a, b, c;
    float d;
    a = 3;
    b = 6;
    c = 7;
    d = (a + b + c) / (float)3;
    
    int num = 12;
    char ch = 'A';
    printf("Os dados são:\n o número %d e o caractere %c", num, ch);
    printf("\n Media entre %d, %d e %d é: %3f n \n", a, b, c, d);
    //Deixando 5 casas para impressão do número
    printf("%5d", num); num = num + 1;
    printf("%5d \n", num); num = num + 1;
    printf("%5d", num); num = num + 1;
    printf("%5d \n", num); num = num + 1;
    //Alinhando à esquerda
    printf("%-5d", num); num = num + 1;
    printf("%-5d \n", num); num = num + 1;
    printf("%-5d", num); num = num + 1;
    printf("%-5d \n", num); num = num + 1;

   
    return 0;


}