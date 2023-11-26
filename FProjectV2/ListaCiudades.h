#ifndef LISTACIUDADES_H
#define LISTACIUDADES_H

#include <vector>
#include "Ciudad.h"

class ListaCiudades {
private:
    std::vector<Ciudad> ciudades;

public:
    void agregarCiudad(const Ciudad& ciudad);
    void mostrarCiudades() const;
    const std::vector<Ciudad>& obtenerCiudades() const {
        return ciudades;
    }
};

#endif
