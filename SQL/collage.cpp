#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Инициализация генератора случайных чисел
    srand(time(0));
    
    int balance = 1500 + rand() % 1000; // Случайный баланс от 1500 до 2499
    int choice;
    
    do {
        // Вывод меню
        cout << "\n=== МЕНЮ ===" << endl;
        cout << "1. Проверить баланс" << endl;
        cout << "2. Купить кофе (150 руб)" << endl;
        cout << "3. Выход" << endl;
        cout << "Ваш выбор: ";
        
        cin >> choice;
        
        // Обработка выбора
        switch (choice) {
            case 1:
                cout << "Ваш баланс: " << balance << " руб." << endl;
                break;
                
            case 2:
                if (balance >= 150) {
                    balance -= 150;
                    cout << "Кофе куплен! Остаток: " << balance << " руб." << endl;
                } else {
                    cout << "Недостаточно средств для покупки кофе!" << endl;
                }
                break;
                
            case 3:
                cout << "Спасибо за использование терминала. До сдачи!" << endl;
                break;
                
            default:
                cout << "Неизвестная команда" << endl;
                break;
        }
        
    } while (choice != 3);
    
    return 0;
}