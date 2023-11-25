#include <iostream>
#include <string>
#include "Empleado.h"
#include "Sucursal.h"

using namespace std;

int main() {
    Empleado empleado;
    Sucursal sucursal;

    cout << "=== Llenar Formulario de Empleado ===" << endl;

    // Solicitar y asignar datos del empleado
    cout << "Ingrese el nombre del empleado: ";
    string nombre;
    getline(cin, nombre);
    empleado.setNombre(nombre);

    // Repite el mismo proceso para los demás campos del formulario...

    // Solicitar información sobre hijos si tiene
    cout << "¿El empleado tiene hijos? (S/N): ";
    string tieneHijos;
    getline(cin, tieneHijos);
    empleado.setTieneHijos(tieneHijos);

    if (tieneHijos == "S" || tieneHijos == "s") {
        cout << "Ingrese el número de hijos del empleado: ";
        int numeroHijos;
        cin >> numeroHijos;
        empleado.setNumeroHijos(numeroHijos);

        cin.ignore(); // Limpiar el buffer después de leer un entero antes de getline

        for (int i = 0; i < numeroHijos; ++i) {
            cout << "Ingrese el nombre del hijo #" << i + 1 << ": ";
            string nombreHijo;
            getline(cin, nombreHijo);

            cout << "Ingrese la fecha de nacimiento del hijo #" << i + 1 << " (DD/MM/AAAA): ";
            string fechaNacimientoHijo;
            getline(cin, fechaNacimientoHijo);

            // Crear un objeto Hijo y agregarlo a la lista de hijos del empleado
            Hijo hijo;
            hijo.setNombre(nombreHijo);
            hijo.setFechaNacimiento(fechaNacimientoHijo);
            empleado.agregarHijo(hijo);
        }
    }

    cout << "\n=== Llenar Formulario de Sucursal ===" << endl;

    // Solicitar y asignar datos de la sucursal
    cout << "Ingrese el nombre de la sucursal: ";
    string nombreSucursal;
    getline(cin, nombreSucursal);
    sucursal.setNombre(nombreSucursal);

    // Repite el mismo proceso para los demás campos del formulario...

    // Ejemplo de cómo acceder a los datos del empleado y la sucursal
    cout << "\n=== Información del Empleado ===" << endl;
    cout << "Nombre: " << empleado.getNombre() << endl;
    // Imprime los demás atributos del empleado...

    // Ejemplo de cómo acceder a los hijos del empleado
    Lista<Hijo> hijos = empleado.getHijos();
    if (!hijos.isEmpty()) {
        cout << "\n=== Información de los Hijos ===" << endl;
        for (int i = 0; i < hijos.getTam(); ++i) {
            Hijo hijo = hijos.getByIndex(i);
            cout << "Hijo #" << i + 1 << ": " << hijo.getNombre() << ", Fecha de Nacimiento: " << hijo.getFechaNacimiento() << endl;
        }
    }

    cout << "\n=== Información de la Sucursal ===" << endl;
    cout << "Nombre: " << sucursal.getNombre() << endl;
    // Imprime los demás atributos de la sucursal...

    return 0;
}

