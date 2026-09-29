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

    int swaps = 0;
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nКоличество перестановок: " << swaps << endl;
    return 0;
}