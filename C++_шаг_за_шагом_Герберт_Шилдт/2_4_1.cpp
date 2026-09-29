#include <iostream>

int main(){
    int chislo_1;
    int chislo_2;
    chislo_1 = 15;
    chislo_2 = 8;
    std::cout << chislo_1;
    std::cout << "\f";
    std::cout << chislo_2;
    std::cout << "\f";
    std::cout << chislo_1 / chislo_2;
    std::cout << "\f";
    std::cout << chislo_1 % chislo_2;

    return 0;
}