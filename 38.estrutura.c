 #include <stdio.h>

//definição de uma estrutura
struct Pagamento
{
    char nome[50];
    char cpf[20];
    char rg[20];
    int ht[6];
    float salario;
    float fgts[2][2];
    
};
//typedef int my_int;
//typedef unsigned char byte;
// Criação de um sinônimo para a estrutura
typedef struct Pagamento pagamento_t;

int main() {
    //struct Pagamento func; //func é uma variável do tipo struct Pagamento. O tipo struct Pagamento está definido acima. 
    //func.salario = 1000;  //Pagamento.salario está incorreto pois deve ser passado o identificado da estrutura. 
    //func.fgts[0][0] = 500;
    //byte char;
    //my_int x;
    pagamento_t func[500]; //definindo 500 funcionários através da criação de um vetor de estruturas.
    func[0].salario = 1000; //acessando o valor no vetor do primeiro funcionário.
    func[0].fgts[0][0] = 500;
    
    printf("Salário: %f FGTS[0][0]: %f\n", func[0].salario, func[0].fgts[0][0]);
    

    return 0;
}


