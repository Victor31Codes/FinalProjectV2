#include "Empleado.h"


void Empleado::setNombre(const std::string& nombre) {
  this->nombre = nombre;
}

void Empleado::setApellido(const std::string& apellido) {
  this->apellido = apellido;
}

void Empleado::setTipoIdentificacion(const std::string& tipoIdentificacion) {
  this->tipoIdentificacion = tipoIdentificacion;
}

void Empleado::setNumeroIdentificacion(const std::string& numeroIdentificacion) {
  this->numeroIdentificacion = numeroIdentificacion;
}

void Empleado::setSexo(const std::string& sexo) {
  this->sexo = sexo;
}

void Empleado::setTelefonoCelular(const std::string& telefonoCelular) {
  this->telefonoCelular = telefonoCelular;
}

void Empleado::setTelefonoFijo(const std::string& telefonoFijo) {
  this->telefonoFijo = telefonoFijo;
}

void Empleado::setEmail(const std::string& email) {
  this->email = email;
}

void Empleado::setFechaNacimiento(const std::string& fechaNacimiento) {
  this->fechaNacimiento = fechaNacimiento;
}

void Empleado::setPaisNacimiento(const std::string& paisNacimiento) {
  this->paisNacimiento = paisNacimiento;
}

void Empleado::setCiudadResidencia(const std::string& ciudadResidencia) {
  this->ciudadResidencia = ciudadResidencia;
}

void Empleado::setDireccion(const std::string& direccion) {
  this->direccion = direccion;
}

void Empleado::setBarrio(const std::string& barrio) {
  this->barrio = barrio;
}

void Empleado::setActividadLaboral(const std::string& actividadLaboral) {
  this->actividadLaboral = actividadLaboral;
}

void Empleado::setTieneHijos(const std::string& tieneHijos) {
  this->tieneHijos = tieneHijos;
}

void Empleado::setNumeroHijos(int numeroHijos) {
  this->numeroHijos = numeroHijos;
}

void Empleado::setNombreSucursal(const std::string& nombreSucursal) {
  this->nombreSucursal = nombreSucursal;
}

void Empleado::setDireccionSucursal(const std::string& direccionSucursal) {
  this->direccionSucursal = direccionSucursal;
}

void Empleado::setBarrioSucursal(const std::string& barrioSucursal) {
  this->barrioSucursal = barrioSucursal;
}

void Empleado::setGerenteSucursal(const std::string& gerenteSucursal) {
  this->gerenteSucursal = gerenteSucursal;
}

void Empleado::setCiudadNacimiento(const std::string& ciudadNacimiento) {
  this->ciudadNacimiento = ciudadNacimiento;
}

std::string Empleado::getNombre() const {
  return nombre;
}

std::string Empleado::getApellido() const {
  return apellido;
}

std::string Empleado::getTipoIdentificacion() const {
  return tipoIdentificacion;
}

std::string Empleado::getNumeroIdentificacion() const {
  return numeroIdentificacion;
}

std::string Empleado::getSexo() const {
  return sexo;
}

std::string Empleado::getTelefonoCelular() const {
  return telefonoCelular;
}

std::string Empleado::getTelefonoFijo() const {
  return telefonoFijo;
}

std::string Empleado::getEmail() const {
  return email;
}

std::string Empleado::getFechaNacimiento() const {
  return fechaNacimiento;
}

std::string Empleado::getPaisNacimiento() const {
  return paisNacimiento;
}

std::string Empleado::getCiudadResidencia() const {
  return ciudadResidencia;
}

std::string Empleado::getDireccion() const {
  return direccion;
}

std::string Empleado::getBarrio() const {
  return barrio;
}

std::string Empleado::getActividadLaboral() const {
  return actividadLaboral;
}

std::string Empleado::getTieneHijos() const {
  return tieneHijos;
}

int Empleado::getNumeroHijos() const {
  return numeroHijos;
}

std::string Empleado::getNombreSucursal() const {
  return nombreSucursal;
}

std::string Empleado::getDireccionSucursal() const {
  return direccionSucursal;
}

std::string Empleado::getBarrioSucursal() const {
  return barrioSucursal;
}

std::string Empleado::getGerenteSucursal() const {
  return gerenteSucursal;
}

// Métodos para la relación con los hijos
void Empleado::agregarHijo(const Hijo& hijo) {
  hijos.endInsert(hijo);
}

Lista<Hijo> Empleado::getHijos() const {
  return hijos;
}

void Empleado::llenarFormulario() {
  // Llenar el formulario con los atributos existentes
  std::cout << "Nombre: ";
  std::cin >> nombre;

  std::cout << "Apellido: ";
  std::cin >> apellido;

  std::cout << "Tipo de Identificación (CC, CE, TI): ";
  std::cin >> tipoIdentificacion;

  std::cout << "Número de Identificación: ";
  std::cin >> numeroIdentificacion;

  std::cout << "Sexo (F/M): ";
  std::cin >> sexo;

  std::cout << "Teléfono Celular: ";
  std::cin >> telefonoCelular;

  std::cout << "Teléfono Fijo: ";
  std::cin >> telefonoFijo;

  std::cout << "Correo Electrónico: ";
  std::cin >> email;

  std::cout << "Fecha de Nacimiento (DD/MM/YYYY): ";
  std::cin >> fechaNacimiento;

  std::cout << "Ciudad de Nacimiento: ";
  std::cin >> ciudadNacimiento;

  std::cout << "País de Nacimiento: ";
  std::cin >> paisNacimiento;

  std::cout << "Ciudad de Residencia: ";
  std::cin >> ciudadResidencia;

  std::cout << "Dirección: ";
  std::cin >> direccion;

  std::cout << "Barrio: ";
  std::cin >> barrio;

  std::cout << "Actividad Laboral: ";
  std::cin >> actividadLaboral;

  std::cout << "¿Tiene hijos? (S/N): ";
  std::cin >> tieneHijos;

  if (tieneHijos == "S" || tieneHijos == "s") {
    std::cout << "Número de Hijos: ";
    std::cin >> numeroHijos;

    // Llenar información de cada hijo
// Inside the loop where you read information for each hijo
	for (int i = 0; i < numeroHijos; ++i) {
   		 Hijo hijo;
    	std::cout << "Nombre del Hijo #" << i + 1 << ": ";
    	std::string nombreHijo;
    	std::cin >> nombreHijo;
   		 hijo.setNombre(nombreHijo);

    	std::cout << "Fecha de Nacimiento del Hijo #" << i + 1 << " (DD/MM/YYYY): ";
   		 std::string fechaNacimientoHijo;
    	std::cin >> fechaNacimientoHijo;
    	hijo.setFechaNacimiento(fechaNacimientoHijo);

    	// Agregar el hijo a la lista de hijos
    	agregarHijo(hijo);
	}
  }

  std::cout << "Nombre de la Sucursal en la que trabaja: ";
  std::cin >> nombreSucursal;
}


