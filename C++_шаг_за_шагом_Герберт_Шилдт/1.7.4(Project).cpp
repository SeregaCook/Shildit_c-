#include <iostream>
using namespace std;

int main()
{
    double meters, futos, result_m, result_f;

    cout << "Введите футы ---->";
    cin >> futos;

    cout << "Введите метры---->";
    cin >> meters;

    result_m = futos / 3.28;
    result_f = meters * 3.28;

    cout << "Вывод в метрах = " << result_m << "\n";
    cout << "Вывод в футах = " << result_f << "\n";

    return 0;
}