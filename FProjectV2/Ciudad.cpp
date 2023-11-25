#include "Ciudad.h"

void Ciudad::setNombre(const std::string& nombre) {
  this->nombre = nombre;
}

std::string Ciudad::getNombre() const {
  return nombre;
}

