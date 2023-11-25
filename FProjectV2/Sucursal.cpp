#include "Sucursal.h"
#include <iostream>

void Sucursal::setNombre(const std::string& nombre) {
  this->nombre = nombre;
}

std::string Sucursal::getNombre() const {
  return nombre;
}

void Sucursal::setDireccion(const std::string& direccion) {
  this->direccion = direccion;
}

std::string Sucursal::getDireccion() const {
  return direccion;
}

void Sucursal::setBarrio(const std::string& barrio) {
  this->barrio = barrio;
}

std::string Sucursal::getBarrio() const {
  return barrio;
}

void Sucursal::setGerente(const std::string& gerente) {
  this->gerente = gerente;
}

std::string Sucursal::getGerente() const {
  return gerente;
}

void Sucursal::llenarFormularioSucursal() {
    std::cout << "=== Llenar Formulario de Sucursal ===" << std::endl;

    // Solicitar y validar el nombre de la sucursal
    do {
        std::cout << "Nombre de la Sucursal: ";
        std::cin >> nombre;
        if (nombre.empty()) {
            std::cout << "Nombre no válido. Ingrese un nombre válido." << std::endl;
        }
    } while (nombre.empty());

    // Solicitar y validar la dirección de la sucursal
    do {
        std::cout << "Dirección de la Sucursal: ";
        std::cin >> direccion;
        if (direccion.empty()) {
            std::cout << "Dirección no válida. Ingrese una dirección válida." << std::endl;
        }
    } while (direccion.empty());

    // Solicitar y validar el barrio de la sucursal
    do {
        std::cout << "Barrio de la Sucursal: ";
        std::cin >> barrio;
        if (barrio.empty()) {
            std::cout << "Barrio no válido. Ingrese un barrio válido." << std::endl;
        }
    } while (barrio.empty());

    // Solicitar y validar el nombre del gerente de la sucursal
    do {
        std::cout << "Nombre del Gerente de la Sucursal: ";
        std::cin >> gerente;
        if (gerente.empty()) {
            std::cout << "Nombre del gerente no válido. Ingrese un nombre válido." << std::endl;
        }
    } while (gerente.empty());
}

