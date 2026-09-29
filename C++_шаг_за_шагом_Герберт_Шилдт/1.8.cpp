#include <iostream>
using namespace std;

int main()
{
    int wert, trce, pol, perc;
    
    cin >> wert;
    cin >> trce;
    
    if (wert >= trce) cout << "большой\n";
    if (trce >= wert) cout << "мальнький\n";

    pol = 100;
    perc = wert + trce;
    if (perc >= pol) cout << "гигант\n";
    return 0;
}