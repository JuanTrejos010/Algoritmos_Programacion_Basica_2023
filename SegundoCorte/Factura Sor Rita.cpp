#include <iostream>

int main() {
	int CantProd;
	int PrecioProd[CantProd], CantInd, Cont=0, Sumatoria=0;
	std::cout << "�Cu�ntos tipos de productos compr�?\n";
	std::cin >> CantProd;
	do {
		CantInd=0;
		std::cout << "Escribe el precio del producto:\n" << Cont+1;
		std::cin >> PrecioProd[Cont];
		std::cout << "Escribe la cantidad del producto:\n";
		std::cin >> CantInd;
		Cont++;
		Sumatoria+=PrecioProd[Cont]*CantInd;
	} while (Cont<CantProd);
}
