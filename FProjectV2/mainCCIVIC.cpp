#include <iostream>
#include <locale.h>
#include <string>
#include "Menu.cpp"
#include "Empleado.h"
#include "Sucursal.h"
#include "Ciudad.h"
#include "ListaCiudades.h"
#include <limits>



using namespace std;

int main() {
    Empleado empleado;
    Sucursal sucursal;
    Ciudad ciudad;
    ListaCiudades listaCiudades;

//    Ciudad nuevaCiudad;
//    Ciudad nuevaCiudad2;
//    nuevaCiudad.llenarFormularioCiudad();
//    nuevaCiudad2.llenarFormularioCiudad();
//    listaCiudades.agregarCiudad(nuevaCiudad);
//    listaCiudades.agregarCiudad(nuevaCiudad2);

//    listaCiudades.mostrarCiudades();
    
//    ciudad.llenarFormularioCiudad();

//    empleado.llenarFormulario();


    // Solicitar al usuario el número de instancias que desea crear
    int numeroInstancias;
    std::cout << "Ingrese el número de ciudades que desea crear: ";
    std::cin >> numeroInstancias;

    // Validar la entrada del usuario
    while (std::cin.fail() || numeroInstancias <= 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Por favor, ingrese un número válido mayor que cero: ";
        std::cin >> numeroInstancias;
    }

    // Crear y agregar las instancias a la lista
for (int i = 0; i < numeroInstancias; ++i) {
    Ciudad* nuevaCiudad = new Ciudad();  // Crear dinámicamente un objeto Ciudad
    nuevaCiudad->llenarFormularioCiudad();  // Llenar los datos
    listaCiudades.agregarCiudad(*nuevaCiudad);  // Agregar el objeto a la lista
}


    // Mostrar la lista de ciudades
    listaCiudades.mostrarCiudades();
    
    
	
	Menu menu;

    setlocale(LC_ALL, "Spanish");
    cout << "Inicializando .." << endl;

	menu.MenuPrincipal();

    return 0;
}

