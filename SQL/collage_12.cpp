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

    int min_idx = 0, max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_idx]) min_idx = i; 
        if (arr[i] > arr[max_idx]) max_idx = i; 
    }

    swap(arr[min_idx], arr[max_idx]);

    cout << "Вывод: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "(индексы " << min_idx << " и " << max_idx << " поменялись местами)." << endl;
    return 0;
}