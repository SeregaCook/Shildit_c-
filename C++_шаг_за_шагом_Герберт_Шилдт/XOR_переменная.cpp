#include <iostream>
#include <cmath>

int main(){
    bool bool_1;
    bool bool_2;
    // я знаю ,что false не выводиться
    bool_1 = false;
    bool_2 = false;
    std::cout << bool_1;
    std::cout << " ";
    std::cout << "XOR ";
    std::cout << bool_2;
    std::cout << " ";
    std::cout << (bool_1 || bool_2) && !(bool_1 && bool_2);
    std::cout << "\n";

    bool_1 = true;
    bool_2 = true;
    std::cout << bool_1;
    std::cout << " ";
    std::cout << "XOR ";
    std::cout << bool_2;
    std::cout << " ";
    std::cout << (bool_1 || bool_2) && !(bool_1 && bool_2);
    std::cout << "\n";

    bool_1 = true;
    bool_2 = false;
    std::cout << bool_1;
    std::cout << " ";    
    std::cout << "XOR ";
    std::cout << bool_2;
    std::cout << " ";    
    std::cout << (bool_1 || bool_2) && !(bool_1 && bool_2);
    std::cout << "\n";

    bool_1 = false;
    bool_2 = true;
    std::cout << bool_1;
    std::cout << " ";
    std::cout << "XOR ";
    std::cout << bool_2;
    std::cout << " ";
    std::cout << (bool_1 || bool_2) && !(bool_1 && bool_2);
    std::cout << "\n";

    return 0;

}