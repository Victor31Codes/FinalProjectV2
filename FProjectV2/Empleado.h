#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include "Lista.h"
#include "Hijo.h"

class Hijo;

class Empleado {
private:
  std::string nombre;
  std::string apellido;
  std::string tipoIdentificacion;
  std::string numeroIdentificacion;
  std::string sexo;
  std::string telefonoCelular;
  std::string telefonoFijo;
  std::string email;
  std::string fechaNacimiento;
  std::string paisNacimiento;
  std::string ciudadResidencia;
  std::string direccion;
  std::string barrio;
  std::string actividadLaboral;
  std::string tieneHijos;
  int numeroHijos;
  Lista<Hijo> hijos;
  int idSucursal;
  std::string nombreSucursal;
  std::string direccionSucursal;
  std::string barrioSucursal;
  std::string ciudadNacimiento;
  std::string gerenteSucursal;
  bool validarNombre(const std::string& nombre) const;
  bool validarApellido(const std::string& apellido) const;
  bool validarEmail(const std::string& email) const;
  bool validarFechaNacimiento(const std::string& fecha) const;
  bool esCadenaSoloLetras(const std::string& cadena);
  bool validarActividadLaboral(const std::string& actividadLaboral) const;

public:
  // Métodos set
  void setNombre(const std::string& nombre);
  std::string getNombre() const;
  void setApellido(const std::string& apellido);
  std::string getApellido() const;
  void setTipoIdentificacion(const std::string& tipoIdentificacion);
  std::string getTipoIdentificacion() const;
  void setNumeroIdentificacion(const std::string& numeroIdentificacion);
  std::string getNumeroIdentificacion() const;
  void setSexo(const std::string& sexo);
  std::string getSexo() const;
  void setTelefonoCelular(const std::string& telefonoCelular);
  std::string getTelefonoCelular() const;
  void setTelefonoFijo(const std::string& telefonoFijo);
  std::string getTelefonoFijo() const;
  void setEmail(const std::string& email);
  std::string getEmail() const;
  void setFechaNacimiento(const std::string& fechaNacimiento);
  std::string getFechaNacimiento() const;
  void setPaisNacimiento(const std::string& paisNacimiento);
  std::string getPaisNacimiento() const;
  void setCiudadResidencia(const std::string& ciudadResidencia);
  std::string getCiudadResidencia() const;
  void setDireccion(const std::string& direccion);
  std::string getDireccion() const;
  void setBarrio(const std::string& barrio);
  std::string getBarrio() const;
  void setActividadLaboral(const std::string& actividadLaboral);
  std::string getActividadLaboral() const;
  void setTieneHijos(const std::string& tieneHijos);
  std::string getTieneHijos() const;
  void setNumeroHijos(int numeroHijos);
  int getNumeroHijos() const;
  void setNombreSucursal(const std::string& nombreSucursal);
  std::string getNombreSucursal() const;
  void setDireccionSucursal(const std::string& direccionSucursal);
  std::string getDireccionSucursal() const;
  void setBarrioSucursal(const std::string& barrioSucursal);
  std::string getBarrioSucursal() const;
  void setGerenteSucursal(const std::string& gerenteSucursal);
  std::string getGerenteSucursal() const;
  void setCiudadNacimiento(const std::string& ciudadNacimiento);
  std::string getCiudadNacimiento() const;
  void setIdSucursal(int idSucursal);
  int getIdSucursal() const;
  

  // Métodos para la relación con los hijos
  void agregarHijo(const Hijo& hijo);
  Lista<Hijo> getHijos() const;
  
    void llenarFormulario();
};

#endif


