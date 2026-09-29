#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int pred_resultat;
    int resultat;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    d = abs(d);
    e = abs(e);
    pred_resultat = a + b + c + d + e;
    resultat = pred_resultat / 5;
    cout << resultat;
}