#include <iostream>
#include <locale.h>
#include <string>
#include "Menu.cpp"
#include "Empleado.h"
#include "Sucursal.h"


using namespace std;

int main() {
    Empleado empleado;
    Sucursal sucursal;

//    empleado.llenarFormulario();
	
	Menu menu;

    setlocale(LC_ALL, "Spanish");
    cout << "Inicializando .." << endl;

	menu.MenuPrincipal();

    return 0;
}

