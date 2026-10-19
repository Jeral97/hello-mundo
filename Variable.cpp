#include <iostream>  // <-- ¡Faltaba esta librería para usar cout y cin!
#include <string>   

int main() {
    std::string jeraldo;
    int edad = 29;  

    std::cout << "PON TU NOMBRE: ";
    std::getline(std::cin, jeraldo);

    std::cout << "PON TU EDAD: ";
    std::cin >> edad; 

    std::cout << "Hola, " << jeraldo << "! tu edad es " << edad << " años." << std::endl;

    return 0;
}
