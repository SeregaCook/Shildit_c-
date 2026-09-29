#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cout << "Введите размер массива: ";
    cin >> n;
    
    vector<int> arr(n), original(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        original[i] = arr[i]; // Сохраняем исходный массив
    }
    
    cout << "Введите число X: ";
    cin >> x;
    
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            arr[i] = 0;
            found = true;
        }
    }
    
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) cout << original[i] << " ";
    
    if (found) {
        cout << "\nИзмененный массив: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    } else {
        cout << "\nЭлемент не найден" << endl;
    }
    return 0;
}