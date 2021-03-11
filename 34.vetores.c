# include <stdio.h>

int main() {
    int v[10], i, cont=0;

    for(i = 0; i < 10; i++) {
        printf("Digite o %do. valor:", i+1);
        scanf("%d", &v[i]);
    }

    for(i=0; i<10; i++){
        if ((v[i] %2 == 0) && (v[i] > 10)) 
            cont++;
    }  
    printf("Contagem: %d\n", cont);
 
  return 0;

}