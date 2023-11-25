#ifndef HIJO_H
#define HIJO_H

#include <string>

class Hijo {
private:
  std::string nombre;
  std::string fechaNacimiento;

public:
  // Constructor por defecto
  Hijo() : nombre(""), fechaNacimiento("") {}

  // Constructor con parámetros
  Hijo(const std::string& nombre, const std::string& fechaNacimiento)
      : nombre(nombre), fechaNacimiento(fechaNacimiento) {}

  // Métodos set y get para el nombre
  void setNombre(const std::string& nombre) { this->nombre = nombre; }
  std::string getNombre() const { return nombre; }

  // Métodos set y get para la fecha de nacimiento
  void setFechaNacimiento(const std::string& fechaNacimiento) {
    this->fechaNacimiento = fechaNacimiento;
  }
  std::string getFechaNacimiento() const { return fechaNacimiento; }
};

#endif


