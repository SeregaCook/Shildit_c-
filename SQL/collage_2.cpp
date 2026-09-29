#include <iostream>

int main(){
    int chislo_1;
    int chislo_2;
    int resultat;
    char znak;


    std::cout << "Введите первое число\n";
    std::cin >> chislo_1;

    std::cout << "Введите второе число\n";
    std::cin >> chislo_2;

    std::cout << "Введите знак + - / *";
    std::cin >> znak;
    
    if(znak == '+'){
        resultat = chislo_1 + chislo_2;
        std::cout << resultat;    
    }
    if(znak == '-'){
        resultat = chislo_2 - chislo_1;
        std::cout << resultat;    
    }
    if(znak == '*'){
        resultat = chislo_1 * chislo_2;
        std::cout << resultat;    
    }
    if(chislo_2 != 0){
        if(znak == '/'){
            resultat = chislo_2 / chislo_1;
            std::cout << resultat;
        }
    }
    else{
        std::cout << "Tu gey";
        }
    return 0;
}