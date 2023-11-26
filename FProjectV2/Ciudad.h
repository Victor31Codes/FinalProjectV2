#ifndef CIUDAD_H
#define CIUDAD_H

#include <string>

class Ciudad {
private:
    std::string nombre;
    std::string departamento;
    int idCiudad;

public:
    void setNombre(const std::string& nombre);
    std::string getNombre() const;

    void setDepartamento(const std::string& departamento);
    std::string getDepartamento() const;

    void setIdCiudad(int idCiudad);
    int getIdCiudad() const;

    void llenarFormularioCiudad(); 
};

#endif

