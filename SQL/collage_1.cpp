#include <iostream>

int main(){
    int storona_1;
    int storona_2;
    int storona_3;
    std::cout << "Данные под номером 1";
    std::cin >> storona_1;
    std::cout << "Данные под номером 2";
    std::cin >> storona_2;
    std::cout << "Данные под номером 3";
    std::cin >> storona_3;
    if(storona_1 + storona_2 > storona_3){
        std::cout << "Треугольник существует" << std::endl;
         if(storona_1 == storona_2 && storona_2 == storona_3){
            std::cout << "Треугольник равносторонний";
         }
         if(storona_1 == storona_2 || storona_2 == storona_1 || storona_1 == storona_3){
            std::cout << "Треугольник равнобедренный";
         }
         else{
            std::cout << "Треугольник разностронний";
         }
    }
    else{
        std::cout << "Ты тупое чмо";
    }
    return 0;
}