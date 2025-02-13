#include <iostream>

int main() {

char op;
    double num1= 10;
    double resultado;
    
    std::cout << "ingrese (=): ";
    std::cin >> op;
    
     switch(op) {
        case '=':
        resultado= (num1 + 5 - 3)*2 / 4;
        std::cout << " el resultado es " << resultado << std::endl;
        break;
     }
    return 0;
}
