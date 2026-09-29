#include <iostream>
using namespace std;

int main(){
    double resultat , chislo_1, chislo_2;
    cout << "Введите число 1 ";
    cin >> chislo_1;

    cout << "Введите число2 ";
    cin >> chislo_2;

    if(chislo_2 != 0){
        cout <<"Не равно нулю поэтому можно делить\n";
        resultat = chislo_1 / chislo_2;
        cout << "Ответ:";
        cout << resultat; 
    };
    return 0;
}