#include <stdlib.h>  //Libreria para limpiar pantalla
#include <iostream>
#include "LeerEntradas.h"
#include "Empleado.h"

using namespace std;

class Menu {
	public:
	
	int Opcion;
//	Sucursal
	Empleado empleado;
	
	// Menus disponbles:
	
//	void SelectorMenu();
//	void MenuPrincipal();
//	void SubMenu_SobreNosotros();
//	void SubMenu_BusquedaPorCategoria();
//	void SubMenu_RealizarConsultas();
//	void SubMenu_CRUD();
	
	// Leer archivos:
	
	void leerArchivos() {
		cout << "algo";
	}
		
	void SelectorMenu() {
		cout << "\nEmpresa CC1" << endl;
	    cout << "Menu Principal" << endl;
	    cout << "--------------------------------------------------" << endl;
	    cout << "1. Sobre nosotros como empresa" << endl;
	    cout << "2. Buscar por categorias" << endl;		
	    cout << "3. Realizar Consultas" << endl;
	    cout << "4. Insertar, Modificar y Eliminar" << endl;
	    cout << "5. Salir" << endl;
	}
	
	void SubMenu_SobreNosotros() {
		cout << "Empresa CC1 busca recoger información acerca de sus empleados con el fin de hallar perfiles \nque les permitan enfocar el desarrollo de las labores de manera más eficiente.  \nPara ello, los gerentes ordenan la elaboración de formularios que son entregados en cada \nuna de las sucursales ubicadas a lo largo y ancho del país \n(puede haber más de una sucursal en la misma ciudad).";
	}
	
	void SubMenu_BusquedaPorCategoria() {
		cout << "categorias";
	}
	
	void SubMenu_RealizarConsultas(){
		cout << "Realizar una consulta" << endl;
	    cout << "--------------------------------------------------" << endl;
	    cout << "1. Numero total de personas que trabajan en una sucursal dada." << endl;
	    cout << "2. Listado de los nombres y apellidos de aquellos que tienen cierto número de hijos." << endl;
	    cout << "3. Realizar Consultas" << endl;
	    cout << "4. Insertar, Modificar y Eliminar" << endl;
	    cout << "5. Salir" << endl;
	}
	
	void SubMenu_CRUD() {
		cout << "Realizar operacion" << endl;
	    cout << "--------------------------------------------------" << endl;
	    cout << "1. Insertar Empleado" << endl;
	    cout << "2. Eliminar Empleado" << endl;
	    cout << "3. Actualizar Empleado" << endl;
	    cout << "4. Insertar Sucursal" << endl;
	    cout << "5. Eliminar Sucursal" << endl;
	    cout << "6. Actualizar Sucursal" << endl;
	    cout << "7. Salir" << endl;
	}
	//Hola gente	
	void MenuPrincipal() {
		bool programaAbierto = true;
		
		while(programaAbierto) { // Bucle hasta que se escoja salir.
//			system("cls");
			SelectorMenu();
			Opcion = LeerEntradas::leerEntrada(1,5);
			
			switch (Opcion) {
				case 1: {
					SubMenu_SobreNosotros();
					cin.ignore(); // Detiene el programa hasta que se presione una tecla.
					break;
				}
				case 2: {
//					system("cls");
					SubMenu_BusquedaPorCategoria();
					Opcion = LeerEntradas::leerEntrada(1,3);
						switch (Opcion) {

							case 1: {
								cout << "Buscar por Ciudad";
								break;
							}
							case 2: {
								cout << "Buscar por Sucursal";
								break;
							}
							case 3: {
								cout << "Buscar por Empleado";
								break;
							}
			
		}
					break;
					
					// Hacer la logica de Busqueda Por Categoria.
				}
				case 3: {
//					system("cls");
					SubMenu_RealizarConsultas();
					Opcion = LeerEntradas::leerEntrada(1,6);
					
					switch (Opcion) {
						case 1: {
							cout << "Numero total de personas que trabajan en una sucursal dada, clasificandolos por rangos de edades de los hijos de la siguiente forma: sin hijos, de 0-5, 6-10, 11-18, mayor de 18.";
//							system("Pause");
							break;
						}
						case 2: {
							cout << "Listado de los nombres y apellidos de aquellos que tienen un número de hijos dado (en rangos), clasificándolos por ciudad y país en que viven.";
//							system("Pause");
							break;
						}
						case 3: {
							cout << "Nombre y apellidos de las personas que viven en una ciudad dada,  clasificándolos por ciudad de nacimiento y actividad laboral.";
//							system("Pause");
							break;
						}
						case 4: {
							cout << "Numero de sucursales en las que trabaja un numero de personas superior a un número dado, mostrando la cantidad de personas de cada sucursal junto con el nombre del gerente, el nombre de la sucursal y el barrio en que se encuentra ubicada dicha sucursal.";
//							system("Pause");
							break;
						}
						case 5: {
							cout << "Obtener el numero de hombres y el número de mujeres que trabajan en las diferentes sucursales, clasificando la información por país y ciudad, mostrando el nombre de la sucursal y del gerente.";
//							system("Pause");
							break;
						}
						case 6: {
							cout << "Dado un rango de edad y una actividad laborar mostrar la lista de trabajadores de esa edad, clasificados por barrio y sucursal a la que pertenecen.";
//							system("Pause");
							break;
						}
					}
					
					break;
				}
				
				case 4: {
					
//					system("cls");
					SubMenu_CRUD();
					Opcion = LeerEntradas::leerEntrada(1,3);
					
					switch (Opcion) {
						case 1: {
							Empleado empleado;
							empleado.llenarFormulario();
							break;
						}
						case 2: {
							cout << "Edit";
							break;
						}
						case 3: {
							cout << "Delete";
							break;
						}
					}
					
					break;
				}
				case 5: {
					system("cls");
					cout << "Gracias por usar nuestro programa !";
					programaAbierto = false;
					break;
				}
			}
		}
	}
		
};
