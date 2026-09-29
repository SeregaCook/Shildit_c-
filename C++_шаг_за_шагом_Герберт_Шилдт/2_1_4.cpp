#include <iostream>

int main(){
    bool dannoe;
    
    dannoe = false;
    std::cout << "Булевое значение ";
    std::cout << dannoe;
    std::cout << "\n";

    dannoe = true;
    std::cout << "Булевое значение ";
    std::cout << dannoe;
    std::cout << "\n";

    if(dannoe) std::cout << "Это выполнется.\n";;

    dannoe = false;
    if(dannoe) std::cout << "Это не выполняется.\n";

    std::cout << "10 > 9 есть "; 
    std::cout << (10 > 9);
    std::cout << "\n";
    return 0;
}