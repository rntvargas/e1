#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream inputFile("C:/Users/renat/Desktop/ejerciciosclase/ejercicio1.txt");  
    std::ofstream outputFile("C:/Users/renat/Desktop/ejerciciosclase/emails_filtrados.txt"); 

    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string nombre, email;
        int edad;
        char delim; 
        std::getline(iss, nombre, ',');
        iss >> edad >> delim;
        std::getline(iss, email);
        if (edad > 18) {
            outputFile << email << std::endl;
        }
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Ok revisar: 'emails_filtrados.txt'." << std::endl;

    return 0;
}