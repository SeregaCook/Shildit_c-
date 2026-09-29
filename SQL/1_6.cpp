#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Введите количество элементов: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int X;
    cout << "Введите число X: ";
    cin >> X;

    cout << "Исходный массив: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    bool found = false;
    for (int &elem : arr) {
        if (elem == X) {
            elem = 0;
            found = true;
        }
    }

    if (!found) {
        cout << "Элемент не найден" << endl;
    } else {
        cout << "Измененный массив: ";
        for (int x : arr) cout << x << " ";
        cout << endl;
    }

    return 0;
}