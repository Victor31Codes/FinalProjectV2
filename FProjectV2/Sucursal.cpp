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
            std::cout << "Nombre no v�lido. Ingrese un nombre v�lido." << std::endl;
        }
    } while (nombre.empty());

    // Solicitar y validar la direcci�n de la sucursal
    do {
        std::cout << "Direcci�n de la Sucursal: ";
        std::cin >> direccion;
        if (direccion.empty()) {
            std::cout << "Direcci�n no v�lida. Ingrese una direcci�n v�lida." << std::endl;
        }
    } while (direccion.empty());

    // Solicitar y validar el barrio de la sucursal
    do {
        std::cout << "Barrio de la Sucursal: ";
        std::cin >> barrio;
        if (barrio.empty()) {
            std::cout << "Barrio no v�lido. Ingrese un barrio v�lido." << std::endl;
        }
    } while (barrio.empty());

    // Solicitar y validar el nombre del gerente de la sucursal
    do {
        std::cout << "Nombre del Gerente de la Sucursal: ";
        std::cin >> gerente;
        if (gerente.empty()) {
            std::cout << "Nombre del gerente no v�lido. Ingrese un nombre v�lido." << std::endl;
        }
    } while (gerente.empty());
}

