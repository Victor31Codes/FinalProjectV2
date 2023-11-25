#ifndef SUCURSAL_H
#define SUCURSAL_H

#include <string>
#include "Lista.h"
#include "Empleado.h"

class Sucursal {
private:
  std::string nombre;
  std::string direccion;
  std::string barrio;
  std::string gerente;
  Lista<Empleado> empleados;

public:
  // Métodos set
  void setNombre(const std::string& nombre);
  std::string getNombre() const;
  void setDireccion(const std::string& direccion);
  std::string getDireccion() const;
  void setBarrio(const std::string& barrio);
  std::string getBarrio() const;
  void setGerente(const std::string& gerente);
  std::string getGerente() const;
  void setDireccionSucursal(const std::string& direccionSucursal);
  void setBarrioSucursal(const std::string& barrioSucursal);
  void setGerenteSucursal(const std::string& gerenteSucursal);

  // Métodos para la relación con los empleados
  void agregarEmpleado(const Empleado& empleado);
  Lista<Empleado> getEmpleados() const;
};

//void Sucursal::agregarEmpleado(const Empleado& empleado) {
//  empleados.endInsert(empleado);
//}

//Lista<Empleado> Sucursal::getEmpleados() const {
//  return empleados;
//}

#endif

