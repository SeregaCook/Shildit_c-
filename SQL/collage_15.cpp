#include <iostream>
using namespace std;

int main() {
    int balance = 1500;
    int choice;
    
    do {
        cout << "\n=== МЕНЮ ===" << endl;
        cout << "1. Проверить баланс" << endl;
        cout << "2. Купить кофе (150 руб)" << endl;
        cout << "3. Выход" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Ваш баланс: " << balance << " руб." << endl;
                break;
            case 2:
                if (balance >= 150) {
                    balance -= 150;
                    cout << "Кофе куплен! Остаток: " << balance << " руб." << endl;
                } else {
                    cout << "Недостаточно средств!" << endl;
                }
                break;
            case 3:
                cout << "Спасибо за использование терминала. До свидания!" << endl;
                break;
            default:
                cout << "Неизвестная команда" << endl;
        }
    } while (choice != 3);
    
    return 0;
}