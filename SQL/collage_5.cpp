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

    int passes = 0;
    for (int i = 0; i < n - 1; i++) {
        passes++;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nКоличество проходов: " << passes << endl;
    return 0;
}