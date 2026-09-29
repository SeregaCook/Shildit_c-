#include <iostream>

int main(){
    int mecach;
    std::cin >> mecach;
    if(mecach >= 1){
        if(mecach <= 12){
            if(mecach == 1){
                std::cout << "Январь";
            }
            if(mecach == 2){
                std::cout << "Февраль";
            }
            if(mecach == 3){
                std::cout << "Март";
            }
            if(mecach == 4){
                std::cout << "Апрель";
            }
            if(mecach == 5){
                std::cout << "Май";
            }
            if(mecach == 6){
                std::cout << "Июнь";
            }
            if(mecach == 7){
                std::cout << "Июль";
            }
            if(mecach == 8){
                std::cout << "Август";
            }
            if(mecach == 9){
                std::cout << "Сентябрь";
            }
            if(mecach == 10){
                std::cout << "Октябрь";
            }
            if(mecach == 11){
                std::cout << "Ноябрь";
            }
            if(mecach == 12){
                std::cout << "Декабрь";
            }
        }
    }
    else{
        std::cout << "Пошёл нахуй";
    }
}