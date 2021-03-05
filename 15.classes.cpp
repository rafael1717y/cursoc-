#include <iostream>

using namespace std;


class propaganda {
    private:

        
    public:


    void inscrever() {
        cout << "Se inscreva no canal...";
        }

    void curta() {
        cout << "Curta o canal \n";
        }

}; // ; no fechamento da classe


int main() {
    propaganda canal; //classe propaganda criando um objeto canal.
    canal.inscrever();
    canal.curta();
    return 0;

}
