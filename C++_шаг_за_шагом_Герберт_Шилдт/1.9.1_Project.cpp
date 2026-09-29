#include <iostream>
using namespace std;

int main(){
    double futos;
    double meters;
    int contur;
    meters = 2.2;
    contur = 0;
    
    for(futos = 1.0; futos <= 25; futos++){
        meters = futos / 3.28;
        cout << futos << "футов составляет " << meters <<"метров.\n";
        contur++;

        if(contur == 10){
            cout << "\n";
            contur = 0;
        };

    };
    return 0;
}