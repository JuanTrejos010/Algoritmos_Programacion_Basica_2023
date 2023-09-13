#include <iostream>

int main(){
	int Multiplicando=1, Multiplicador=1, Producto;
	do {
		std::cout << "Tabla del " << Multiplicando <<".\n\n";
		do{
		Producto=Multiplicando*Multiplicador;
		std::cout << Multiplicando << "*" << Multiplicador << "= " << Producto << "\n";
		Multiplicador++;
		}
		while (Multiplicador<=10);
		Multiplicando++;
		Multiplicador=1;
		std::cout << "\n\n";
	}
	while (Multiplicando<=10);
}
