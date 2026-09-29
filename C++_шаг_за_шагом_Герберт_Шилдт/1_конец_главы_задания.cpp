#include <iostream>
using namespace std;

int main(){
    double futos;
    double meters;
    int contur;
    int contur_1;
    meters = 2.2;
    contur = 0;
    for(contur_1 = 0;contur_1 >= 25;contur_1++){
        cout << "\n";
        contur = 0;
    };
    for(futos = 1.0; futos <= 100; futos++){
        meters = futos / 3.28;
        cout << futos << "футов составляет " << meters <<"метров.\n";
        contur++;

        if(contur == 25){
            cout << "\n";
            contur = 0;
        };

    };
    return 0;
}