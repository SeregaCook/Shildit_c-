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

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < N; ++i) {
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
    }

    swap(arr[minIndex], arr[maxIndex]);

    cout << "Массив после обмена: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}