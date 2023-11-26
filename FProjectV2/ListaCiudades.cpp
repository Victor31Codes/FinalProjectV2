#include "ListaCiudades.h"
#include <iostream>

void ListaCiudades::agregarCiudad(const Ciudad& ciudad) {
    ciudades.push_back(ciudad);
}

void ListaCiudades::mostrarCiudades() const {
    std::cout << "Lista de Ciudades:" << std::endl;
    for (const auto& ciudad : ciudades) {
        std::cout << "Nombre: " << ciudad.getNombre() << ", Departamento: " << ciudad.getDepartamento() << ", ID: " << ciudad.getIdCiudad() << std::endl;
    }
}

//const std::vector<Ciudad>& listaCiudades = ListaCiudades.obtenerCiudades();
//
//// Iterar sobre la lista para obtener los ID
//for (const Ciudad& ciudad : listaCiudades) {
//    int idCiudad = ciudad.getIdCiudad();
//    // Hacer algo con el ID
//    std::cout << "ID de ciudad: " << idCiudad << std::endl;
//}

