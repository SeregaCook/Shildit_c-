#include <iostream>
#include <cmath>
int main(){
    double chislo_1;
    double chislo_2;
    double result;

    std::cout << "Введите число под номером один ";
    std::cin >> chislo_1;
    std::cout <<"\n";
    
    std::cout <<"Введите число под номером два ";
    std::cin >> chislo_2;
    std::cout <<"\n";

    result = sqrt(chislo_1 * chislo_1 + chislo_2 * chislo_2);
    std::cout << "Гепотенуза равна ";
    std::cout << result;

    return 0;
}