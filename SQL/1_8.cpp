#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Введите количество элементов: ";
    cin >> N;

    vector<int> source(N);
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < N; ++i) {
        cin >> source[i];
    }

    cout << "Исходный массив: ";
    for (int x : source) cout << x << " ";
    cout << endl;

    vector<int> filtered;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 1 && source[i] % 2 == 0) {
            filtered.push_back(source[i]);
        }
    }

    cout << "Новый массив: ";
    if (filtered.empty()) {
        cout << "пусто";
    } else {
        for (int x : filtered) cout << x << " ";
    }
    cout << endl;

    return 0;
}