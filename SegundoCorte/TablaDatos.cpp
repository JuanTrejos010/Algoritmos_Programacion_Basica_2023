#include <iostream>
#include <string>

int main() {
	std::string Datos[5];
	int Opcion;
	std::cout << "Seleccionar opción:\n 1)Adicionar 2) Consultar 3)Eliminar 4)Salir\n\n";
	std::cin >> Opcion;
	while (Opcion<1 || Opcion>4) {
		std::cout << "Opción inválida.\n"
		std::cin >> Opcion;
	}
	switch(Opcion) {
		case 1:
			//Adicionar
			for (int count=0;count<5;count++) {
				if (count==0) {
					std::cout << "Cédula: ";
				} else if (count==1) {
					std::cout << "Nombre: ";
				} else if (count==2) {
					std::cout << "Edad: ";
				} else if (count==3) {
					std::cout << "Salario: ";
				} else if (count==4) {
					std::cout << "Afición: ";
				}
				std::cin >> Datos[count];
			}
		break;
		case 2:
			//Mostrar
			for (int count=0;count<5;count++) {
				if (count==0) {
					std::cout << "Cédula: ";
				} else if (count==1) {
					std::cout << "Nombre: ";
				} else if (count==2) {
					std::cout << "Edad: ";
				} else if (count==3) {
					std::cout << "Salario: ";
				} else if (count==4) {
					std::cout << "Afición: ";
				}
				std::cout >> Datos[count];
			}
		break;
		case 3:
			//Eliminar
			for (int count=0;count<5;count++) {
				Datos[count]=" ";
				std::cout << "Datos eliminados."
			}
		break;
		case 4:
			//Salir
			std::cout << "Ha salido. Gracias por su visita.";
		break;
	}
}
