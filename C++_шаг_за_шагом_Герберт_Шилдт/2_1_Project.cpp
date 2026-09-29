#include <iostream>

int main(){
   long double scoroct_sveta;
   long double rasstoanie;
    double zaderchka;
    double zaderchka_v_minutu;

    rasstoanie = 34000000;
    scoroct_sveta = 186000;

    zaderchka = rasstoanie / scoroct_sveta;
    std::cout << "Задержка между Марсом и Землёй ";
    std::cout << zaderchka;
    std::cout << "\n";
    zaderchka_v_minutu = zaderchka / 60;

    std::cout << "Задержка в минутах между Марсом и Землёй ";
    std::cout << zaderchka_v_minutu;
    return 0;
}
