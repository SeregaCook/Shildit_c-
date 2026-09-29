#include <iostream>
using namespace std;

void a() {
    int q = 5;
    int qq = q * q;
    cout << qq << endl;
}

int i(int w) {
    int qqq = w * w;
    return qqq;
}

int main() {
    for(int i = 0; i < 10; i++) {
        a();
    }
    cout << i(1) << endl;
    return 0;
}