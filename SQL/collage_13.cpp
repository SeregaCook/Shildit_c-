#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> new_arr;

    for (int i = 1; i < n; i += 2) {
        if (arr[i] % 2 == 0) {
            new_arr.push_back(arr[i]);
        }
    }

    cout << "Новый массив: ";
    for (int val : new_arr) cout << val << " ";
    cout << endl;
    return 0;
}