#include <iostream>

int main(){
	int Multiplicando=1, Multiplicador=1, Producto;
	while (Multiplicando <=10){
		std::cout << "Tabla del " << Multiplicando << "\n\n";
		while (Multiplicador<=10){
			Producto=Multiplicando*Multiplicador;
			std::cout << Multiplicando << "*" << Multiplicador << "= " << Producto << "\n";
			Multiplicador++;
		}
		Multiplicador=1;
		Multiplicando+=1;
		std::cout << "\n\n";
	}
}
