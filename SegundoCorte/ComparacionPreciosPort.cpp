#include <iostream>

int main() {
	char NombreProducto[40];
	int Iteracion, Precios[2], Sumatoria=0, Promedio;
	std::cout << "¿Qué producto desea comparar?\n";
	std::cin >> NombreProducto;
	std::cout << "\n\n Precios en euros:\n";
	for (Iteracion=0;Iteracion<3;Iteracion++) {
		std::cout << "\nPrecio en lugar " << Iteracion+1 << "\n";
		std::cin >> Precios[Iteracion];
		Sumatoria+=Precios[Iteracion];
	}
	std::cout << "\n\nLos precios del producto son: \n";
	for (Iteracion=0;Iteracion<3;Iteracion++) {
		std::cout << Precios [Iteracion] << " | ";
	}
	Promedio=Sumatoria/3;
	std::cout << "\nEl promedio de los precios es de " << Promedio;
}
