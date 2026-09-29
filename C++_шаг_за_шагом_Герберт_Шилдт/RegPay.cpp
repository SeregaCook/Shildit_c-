#include <iostream>
#include <cmath>

int main(){
double nachalnaia_cymma;
double stavka_proc_po_ssyde;

double chislo_platechey_v_god;
double let_ssuda;

double regular_platoch;
double permen_1;
double peremen_2;

double poradok_1;
double poradok_2;

std::cout << "Порядок всей ссуды";
std::cin >> nachalnaia_cymma;

std::cout << "Процент ставка";
std::cin >> stavka_proc_po_ssyde;

std::cout << "платёж за год";
std::cin >> chislo_platechey_v_god;

std::cout << "Число лет на сколько кредит будет выдан";
std::cin >> let_ssuda;

peremen_2 = nachalnaia_cymma * stavka_proc_po_ssyde / chislo_platechey_v_god;

poradok_1 = -(chislo_platechey_v_god * let_ssuda);
poradok_2 = (stavka_proc_po_ssyde / chislo_platechey_v_god) + 1;

permen_1 = 1 - pow(poradok_2, poradok_1);

regular_platoch =  permen_1 / peremen_2;

std::cout <<"Платёж сосотавит";
std::cout << regular_platoch;

return 0;

}
