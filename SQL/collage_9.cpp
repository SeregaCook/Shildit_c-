#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Ввод N: ";
    cin >> n;
    
    vector<int> arr(n);
    int sum = 0, pos = 0, neg = 0, zero = 0;
    
    cout << "Массив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 101 - 50;
        cout << arr[i] << " ";
        
        sum += arr[i];
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }
    
    double avg = (double)sum / n;
    cout << "\nВывод: Сумма: " << sum 
         << ", Среднее: " << avg 
         << ", Положительных: " << pos 
         << ", Отрицательных: " << neg 
         << ", Нулевых: " << zero << "." << endl;
    return 0;
}