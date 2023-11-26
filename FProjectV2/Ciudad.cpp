
#include "Ciudad.h"
#include <iostream>
#include <cctype> 
#include <algorithm>


void Ciudad::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

std::string Ciudad::getNombre() const {
    return nombre;
}

void Ciudad::setDepartamento(const std::string& departamento) {
    this->departamento = departamento;
}

std::string Ciudad::getDepartamento() const {
    return departamento;
}

void Ciudad::setIdCiudad(int idCiudad) {
    this->idCiudad = idCiudad;
}

int Ciudad::getIdCiudad() const {
    return idCiudad;
}

void Ciudad::llenarFormularioCiudad() {
    // Validación para el nombre de la ciudad (solo letras)
    do {
        std::cout << "Ingrese el nombre de la ciudad: ";
        std::cin >> nombre;
    } while (!std::all_of(nombre.begin(), nombre.end(), ::isalpha));

    // Validación para el nombre del departamento (solo letras)
    do {
        std::cout << "Ingrese el nombre del departamento: ";
        std::cin >> departamento;
    } while (!std::all_of(departamento.begin(), departamento.end(), ::isalpha));

    // Validación para el ID de la ciudad (número entre 1 y 99)
    do {
        std::cout << "Ingrese el ID de la ciudad (entre 1 y 99): ";
        std::cin >> idCiudad;

        if (std::cin.fail() || idCiudad < 1 || idCiudad > 99) {
            std::cin.clear(); // Restablecer el indicador de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "ID de ciudad no válido. Intente nuevamente." << std::endl;
        }
    } while (idCiudad < 1 || idCiudad > 99);
}
