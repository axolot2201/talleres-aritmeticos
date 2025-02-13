#include <iostream>

int main() {
    char op;
    double num1;
    double resultado;
    
    std::cout << "ingrese (%): ";
    std::cin >> op;
    std::cout << "ingrese el numero #1: ";
    std::cin >> num1;
    
    switch(op) {
        case '%':
    resultado= num1/100*15;
        std::cout << " el resultado es " << resultado << std::endl;
        break;
        
    }
    return 0;
}
