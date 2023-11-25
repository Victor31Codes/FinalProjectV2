#include "Sucursal.h"

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

