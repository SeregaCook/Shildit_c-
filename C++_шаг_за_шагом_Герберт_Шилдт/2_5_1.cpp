#include <iostream>

int main(){
    int chislo_1;
    int chislo_2;

    bool bool_1;
    bool bool_2;

    if(chislo_1 > chislo_2){
        std::cout << "chislo_1 > chislo_2\n";
    }
    if(chislo_1 >= chislo_2){
        std::cout << "chislo_1 >= chislo_2\n";
    }
    if(chislo_1 < chislo_2){
        std::cout << "chislo_1 < chislo_2\n";
    }
    if(chislo_1 <= chislo_2){
        std::cout << "chislo_1 <= chislo_2\n";
    }
    if(chislo_1 == chislo_2){
        std::cout << "chislo_1 == chislo_2\n";
    }
    if(chislo_1 != chislo_2){
        std::cout << "chislo_1 != chislo_2\n";
    }
    if(bool_1 && bool_2){
        std::cout << "true\n";
    }
    if(bool_1 || bool_2){
        std::cout << "true\n";
    }
    if(!(bool_1 && bool_2)){
        std::cout << "true\n";
    }
    return 0;
}