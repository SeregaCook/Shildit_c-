#include <iostream>
using namespace std;

int main()
{
    int chislo, chislo_1;
    chislo = 1;

    for(chislo_1 = 1; chislo_1 <= 100; chislo_1 = chislo++);
    cout << chislo_1 << " ";

    return 0;
}