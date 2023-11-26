#include "Empleado.h"
#include "Sucursal.h"
#include <iostream>
#include <regex>
#include <string>
#include <cstdlib>
#include <algorithm> 
#include <cctype>
#include <climits> 
#include <limits>

using namespace std;


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
	    std::cout << "=== Llenar Formulario ===" << std::endl;
  // Llenar el formulario con los atributos existentes
// Validación del nombre
do {
    std::cout << "Nombre: ";
    std::cin >> nombre;
    if (!validarNombre(nombre)) {
        std::cout << "Nombre invalido. Ingrese un nombre valido." << std::endl;
    }
} while (!validarNombre(nombre));

// Validación del apellido
do {
    std::cout << "Apellido: ";
    std::cin >> apellido;
    if (!validarApellido(apellido)) {
        std::cout << "Apellido debe contener solo letras." << std::endl;
        std::cout << "Apellido invalido. Ingrese un apellido valido." << std::endl;
    }
} while (!validarApellido(apellido));

// Validación del tipo de identificación
    do {
        std::cout << "Tipo de Identificacion (CC, CE, TI): ";
        std::cin >> tipoIdentificacion;

        // Convertir a minúsculas
        std::transform(tipoIdentificacion.begin(), tipoIdentificacion.end(), tipoIdentificacion.begin(), ::tolower);

        if (tipoIdentificacion != "cc" && tipoIdentificacion != "ce" && tipoIdentificacion != "ti") {
            std::cout << "Tipo de identificacion invalido. Ingrese CC, CE o TI." << std::endl;
        }
    } while (tipoIdentificacion != "cc" && tipoIdentificacion != "ce" && tipoIdentificacion != "ti");

     do {
        std::cout << "Numero de Identificacion: ";
        std::cin >> numeroIdentificacion;

        // Verificar que todos los caracteres sean dígitos
        bool esNumerico = true;
        for (char ch : numeroIdentificacion) {
            if (!isdigit(ch)) {
                esNumerico = false;
                break;
            }
        }

        // Verificar la longitud del número de identificación
        if (esNumerico) {
            int longitud = numeroIdentificacion.length();
            if (longitud < 8 || longitud > 10) {
                std::cout << "Número de identificación debe tener entre  8 y 10 dígitos." << std::endl;
            } else {
                // El número de identificación es válido
                break;
            }
        } else {
            std::cout << "Número de identificación debe contener solo dígitos." << std::endl;
        }
    } while (true);

    // Validación del sexo
    do {
        std::cout << "Sexo (F/M): ";
        std::cin >> sexo;

        // Verificar que el sexo sea válido (mayúscula o minúscula)
        if (sexo == "F" || sexo == "f" || sexo == "M" || sexo == "m") {
            // El sexo es válido
            break;
        } else {
            std::cout << "Ingrese un valor valido para el sexo (F/M)." << std::endl;
        }
    } while (true);

  do {
        std::cout << "Telefono Celular: ";
        std::cin >> telefonoCelular;

        // Verificar que el teléfono celular sea numérico y tenga entre 10 y 12 dígitos
        if (std::all_of(telefonoCelular.begin(), telefonoCelular.end(), ::isdigit) &&
            telefonoCelular.length() >= 10 && telefonoCelular.length() <= 12) {
            // El teléfono celular es válido
            break;
        } else {
            std::cout << "Ingrese un numero de telefono celular velido (entre 10 y 12 digitos)." << std::endl;
        }
    } while (true);

// Validación del teléfono fijo
    do {
        std::cout << "Teléfono Fijo: ";
        std::cin >> telefonoFijo;

        // Verificar que el teléfono fijo sea numérico y tenga entre 7 y 8 dígitos
        if (std::all_of(telefonoFijo.begin(), telefonoFijo.end(), ::isdigit) &&
            telefonoFijo.length() >= 7 && telefonoFijo.length() <= 8) {
            // El teléfono fijo es válido
            break;
        } else {
            std::cout << "Ingrese un número de teléfono fijo válido (entre 7 y 8 dígitos)." << std::endl;
        }
    } while (true);

    // Validar el correo electrónico
    std::cout << "Correo Electrónico: ";
    std::cin.ignore();
    std::getline(std::cin, email);
    while (!validarEmail(email)) {
        std::cout << "Correo electrónico inválido. Ingrese un correo válido: ";
        std::getline(std::cin, email);
    }

    // Validar la fecha de nacimiento
    std::cout << "Fecha de Nacimiento (DD/MM/YYYY): ";
    std::getline(std::cin, fechaNacimiento);
    while (!validarFechaNacimiento(fechaNacimiento)) {
        std::cout << "Fecha de nacimiento inválida. Ingrese una fecha válida (DD/MM/YYYY): ";
        std::getline(std::cin, fechaNacimiento);
    }

 // Validación de la ciudad de nacimiento
    do {
        std::cout << "Ciudad de Nacimiento: ";
        std::cin >> ciudadNacimiento;
    } while (!esCadenaSoloLetras(ciudadNacimiento));

    // Validación del país de nacimiento
    do {
        std::cout << "País de Nacimiento: ";
        std::cin >> paisNacimiento;
    } while (!esCadenaSoloLetras(paisNacimiento));

    // Validación de la ciudad de residencia
    do {
        std::cout << "Ciudad de Residencia: ";
        std::cin >> ciudadResidencia;
    } while (!esCadenaSoloLetras(ciudadResidencia));

  std::cout << "Dirección: ";
  std::cin >> direccion;

      do {
        std::cout << "Barrio: ";
        std::cin >> barrio;
    } while (!esCadenaSoloLetras(barrio));

std::cout << "Actividad Laboral: (Artes, Ciencias Sociales, Ingenierias, Areas de la Salud) ";
std::cin >> actividadLaboral;

// Convertir a minúsculas
std::transform(actividadLaboral.begin(), actividadLaboral.end(), actividadLaboral.begin(), ::tolower);

while (!validarActividadLaboral(actividadLaboral)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Ingrese una actividad laboral válida: ";
    std::cin >> actividadLaboral;

    // Convertir a minúsculas
    std::transform(actividadLaboral.begin(), actividadLaboral.end(), actividadLaboral.begin(), ::tolower);
}
  std::cout << "¿Tiene hijos? (S/N): ";
  std::cin >> tieneHijos;

  if (tieneHijos == "S" || tieneHijos == "s") {
    std::cout << "Número de Hijos: ";
    std::cin >> numeroHijos;

    // Llenar información de cada hijo
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
  
      Sucursal sucursal;
    sucursal.llenarFormularioSucursal();
}

//// Implementación de las funciones
//bool Empleado::validarEmail(const std::string& email) const {
//    std::regex pattern("^\\w[-._\\w]*\\w@([\\w-]+\\.)+[\\w-]{2,4}$");
//    return std::regex_match(email, pattern);
//}
bool Empleado::validarEmail(const std::string& email) const {
    // Verificar que haya al menos un '@' y un '.' en la cadena
    size_t atPos = email.find('@');
    size_t dotPos = email.rfind('.');

    return (atPos != std::string::npos && dotPos != std::string::npos && dotPos > atPos);
}

//bool Empleado::validarFechaNacimiento(const std::string& fecha) const {
//    std::regex pattern(
//        "^(?:(?:31(\\/|-|\\.)(?:0?[13578]|1[02]))\\1|(?:(?:29|30)(\\/"
//        "|-|\\.)(?:0?[13-9]|1[0-2])\\2))(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$|^(?:29("
//        "\\/"
//        "|-|\\.)0?2\\3(?:(?:(?:1[6-9]|[2-9]\\d)?(?:0[48]|[2468][048]|[13579]["
//        "26])|(?:(?:16|[2468][048]|[3579][26])00))))$|^(?:0?[1-9]|1\\d|2[0-8])("
//        "\\/"
//        "|-|\\.)(?:(?:0?[1-9])|(?:1[0-2]))\\4(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$");
//    return std::regex_match(fecha, pattern);
//}
bool Empleado::validarFechaNacimiento(const std::string& fecha) const {
    // Verificar que la cadena tenga el formato esperado (DD/MM/YYYY)
    if (fecha.size() != 10 || fecha[2] != '/' || fecha[5] != '/')
        return false;

    std::stringstream ss(fecha);

    int dia, mes, anio;
    char sep1, sep2;

    // Intentar extraer día, mes y año
    ss >> dia >> sep1 >> mes >> sep2 >> anio;

    // Verificar que la extracción fue exitosa y que los separadores son correctos
    return ss && sep1 == '/' && sep2 == '/' &&
           (dia >= 1 && dia <= 31) &&
           (mes >= 1 && mes <= 12) &&
           (anio >= 1900);
}

bool Empleado::validarNombre(const std::string& nombre) const {
    // Verificar que no esté vacío y que solo contenga letras
    if (nombre.empty() || !std::all_of(nombre.begin(), nombre.end(), ::isalpha)) {
        return false;
    }

    return true;
}

bool Empleado::validarApellido(const std::string& apellido) const {
    // Verificar que no esté vacío y que solo contenga letras
    if (apellido.empty() || !std::all_of(apellido.begin(), apellido.end(), ::isalpha)) {
        return false;
    }

    return true;
}

bool Empleado::esCadenaSoloLetras(const std::string& cadena) {
    for (char ch : cadena) {
        if (!isalpha(ch)) {
        	std::cout << "Cadena no valida, ingrese de nuevo algo valido." <<endl;
            return false;
        }
    }
    return true;
}

bool Empleado::validarActividadLaboral(const std::string& actividadLaboral) const {
    // Convertir la entrada a minúsculas
    std::string actividadLaboralLower = actividadLaboral;
    std::transform(actividadLaboralLower.begin(), actividadLaboralLower.end(), actividadLaboralLower.begin(), ::tolower);

    // Validar la entrada
    if (actividadLaboralLower == "artes" || actividadLaboralLower == "ciencias sociales" ||
        actividadLaboralLower == "ingenierias" || actividadLaboralLower == "areas de la salud") {
        return true;
    } else {
        std::cout << "Ingrese una actividad laboral válida." << std::endl;
        return false;
    }
    return true;
}


//bool Empleado::validarNombre(const std::string& nombre) const {
//    // Verificar que no esté vacío y solo contiene letras
//    return !nombre.empty() && std::regex_match(nombre, std::regex("^[A-Za-z]+$"));
//}
//
//bool Empleado::validarApellido(const std::string& apellido) const {
//    // Verificar que no esté vacío y solo contiene letras
//    return !apellido.empty() && std::regex_match(apellido, std::regex("^[A-Za-z]+$"));
//}
