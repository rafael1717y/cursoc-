#include <iostream>

using namespace std;

class carro {
    private:
    int ano;
    float valor, km;

    public:

    //construtor
    carro(int a, float v, float k);

    //getters e setters
    //ano
    void setAno(int a);
    int getAno();
    
    //valor
    void setValor(float v);
    float getValor(); 

    //km
    void setKm(float k);
    float getKm(); 


};

int main(){
    carro palio(1995, 10000, 15000); //usando o construtor
    //palio.setAno(2010);    
    //palio.setValor(10000);
    //palio.setKm(150000);
    cout << "Palio: \n";
    cout << "Ano: " << palio.getAno() << endl;
    cout << "Valor: " << palio.getValor() << endl;
    cout << "Km: " << palio.getKm() << endl;
 

    carro bmw (2010, 11122,200000);
    //bmw.setAno(2019);
    //bmw.setValor(300000);
    //bmw.setKm(1000);
    cout << "BMW: \n";
    cout << "Ano: " << bmw.getAno() << endl;
    cout << "Valor: " << bmw.getValor() << endl;
    cout << "Km: " << bmw.getKm() << endl;

    return 0;
} 


    carro::carro(int a=0, float v=-1, float k=-1){
        ano = a; // o ano receberá o valor de a de entrada
        valor = v;
        km = k;
    }

    //get e set
    void carro::setAno(int a) {
        ano = a; // a é entrada do usuário
    }

    int carro::getAno() {
        return ano;
    }

    void carro::setValor(float v) {
        valor = v; // v é entrada do usuario q será armazenda em valor...
        
    }

    float carro::getValor() {
        return valor;
    }

    //km
    void carro::setKm(float k){
        km = k;
    }

    float carro::getKm() {
        return km;
    }





