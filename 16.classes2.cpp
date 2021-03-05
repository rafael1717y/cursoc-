#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;
    
    public:

    //construtor - msm nome da classe
    carro(int a=0, float v=-1, float k=-1){
        ano = a; // o ano receberá o valor de a de entrada
        valor = v;
        km = k;
    }



    //get e set
    void setAno(int a) {
        ano = a; // a é entrada do usuário
    }

    int getAno() {
        return ano;
    }

    void setValor(float v) {
        valor = v; // v é entrada do usuario q será armazenda em valor...
        
    }

    float getValor() {
        return valor;
    }

    //km
    void setKm(float k){
        km = k;
    }


    float getKm() {
        return km;
    }

};



int main() {

    carro palio(1995, 10000, 15000); //usando o construtor
    //palio.setAno(2010);    
    //palio.setValor(10000);
    //palio.setKm(150000);
    cout << "Palio: \n";
    cout << "Ano: " << palio.getAno() << endl;
    cout << "Valor: " << palio.getValor() << endl;
    cout << "Km: " << palio.getKm() << endl;
 

    carro bmw;
    bmw.setAno(2019);
    bmw.setValor(300000);
    bmw.setKm(1000);
    cout << "BMW: \n";
    cout << "Ano: " << bmw.getAno() << endl;
    cout << "Valor: " << bmw.getValor() << endl;
    cout << "Km: " << bmw.getKm() << endl;
 



 
    return 0;
}