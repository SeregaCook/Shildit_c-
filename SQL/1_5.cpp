#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N;
    cout << "Введите N: ";
    cin >> N;

    srand(time(0));

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        arr[i] = rand() % 101 - 50;
    }

    cout << "Массив: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    int sum = 0;
    int positive = 0, negative = 0, zero = 0;

    for (int x : arr) {
        sum += x;
        if (x > 0) positive++;
        else if (x < 0) negative++;
        else zero++;
    }

    double average = static_cast<double>(sum) / N;

    cout << "Сумма: " << sum << endl;
    cout << "Среднее: " << average << endl;
    cout << "Положительных: " << positive << endl;
    cout << "Отрицательных: " << negative << endl;
    cout << "Нулевых: " << zero << endl;

    return 0;
}