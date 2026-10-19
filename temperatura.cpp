#include <iostream>

int main() {
    int temperatura = 25;

    if (temperatura > 30) {
        std::cout << "Hace mucho calor." << std::endl;
    } 
    else if (temperatura < 15) {
        std::cout << "Hace mucho frio." << std::endl;
    } 
    else {
        std::cout << "El clima esta agradable." << std::endl;
    }

    return 0;
}
