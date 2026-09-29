#include <iostream>
using namespace std;

int main()
{
    int longa, went;

    cout << "Введите размер человекоподобного существа";
    cin >> longa;
    
    cout << "введите размер волосенного покрова";
    cin >> went;

    cout << "существу присваивается номер:" << longa * went;
    return 0;
}