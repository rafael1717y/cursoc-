#include <iostream>

using namespace std;

int main() {
    float gastofamilia[5];
    for (int i=0; i < 5; i++){
        cout << "Digite os gastos da família" << i+1 << endl;
        cin >> gastofamilia[i];
    }
    float media=0;
    for (int i=0; i < 5; i++) {
        media+=gastofamilia[i];
    }
    media=media/5;
    cout << "Média de gastos: " << media << endl;
    
    for (int i=0; i<5; i++ ){
        if (gastofamilia[i] < media) {
            cout << "A família " << i+1 << " tem gastos abaixo da média\n";
        } else if (gastofamilia[i] == media) {
            cout << "A família " << i+1 << " tem gastos na média \n";
        } else {
            cout << "A família " << i+1 << " tem gastos acima da média \n";
        }

    }

    return 0;


}