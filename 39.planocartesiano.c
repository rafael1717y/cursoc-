#include <stdio.h>
#include <math.h>
/*Este programa declara uma estrutura para representar um ponto no plano cartesiano e 
calcula as menores distâncias entre os pontos.*/

struct p
{
    float x;
    float y;
};

typedef struct p ponto;


int main() {
    ponto seq[10]; // Criar primeiro a variável. Não confundir a definição de tipo com a declaração da variável. 
    int i, j, menor1, menor2;
    float dist, menor = 99999;
    
    for(i = 0; i < 10; i++) {
        printf("Digite as coordenadas do %do. ponto: ", i+1);
        scanf("%f %f", &seq[i].x, &seq[i].y);
    }
    for (i = 0; i < 10; i++) {
        printf("(%.2f, %.2f)\n", seq[i].x, seq[i].y);
    }

    for (i = 0; i < 9; i++) {
        for(j= i+ 1; j< 10; j++) {
            dist = sqrt(pow(seq[i].x - seq[j].x, 2) + pow(seq[i].y - seq[j].y, 2));
            //printf("dist (%d, %d) = %f\n", i, j, dist);
            if (dist < menor) {
                menor = dist;
                menor1 = i;
                menor2 = j;
            }
        }
    }
    printf("Pontos mais próximos são: %d, %d que estão nas coordenadas (%.2f,%.2f) e (%.2f,%.2f), e a distância entre eles é %.2f\n", menor1, menor2, seq[menor1].x, seq[menor1].y, seq[menor2].x, seq[menor2].y, menor);
     
    return 0;
}