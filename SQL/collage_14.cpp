#include <iostream>
#include <limits>
using namespace std;

int main() {
    int age;
    bool valid = false;
    
    do {
        cout << "Введите ваш возраст: ";
        if (cin >> age && age >= 1 && age <= 120) {
            valid = true;
        } else {
            cout << "Ошибка! Возраст должен быть от 1 до 120. Попробуйте снова." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    } while (!valid);

    cout << "Отлично! Вам " << age << " лет. Добро пожаловать!" << endl;
    return 0;
}