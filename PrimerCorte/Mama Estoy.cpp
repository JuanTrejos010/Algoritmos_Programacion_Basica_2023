#include <iostream>
using namespace std;

int main(){
	int Num1, Num2, Operacion;
	float Resultado;
	std::cout << "Mam�, estoy triunfando. Soy tu hijo preferido.\n";
	std::cout << "Escribe los dos valores por operar:\n";
	std::cin >> Num1;
	std::cin >> Num2;
	std::cout << "\nSelecciona qu� operaci�n vas a realizar.\n1 - Suma | 2 - Resta | 3 - Multiplicaci�n | 4 - Divisi�n\n";
	std::cin >> Operacion;
	while (Operacion < 1 || Operacion >4) {
		std::cout << "\nPar�metro inv�lido. Estas son las operaciones que se pueden hacer:\n1 - Suma | 2 - Resta | 3 - Multiplicaci�n | 4 - Divisi�n\n";
		std::cin >> Operacion;
	}
	switch (Operacion) {
		case 1:
			Resultado=Num1+Num2;
			break;
		case 2:
			Resultado=Num1-Num2;
			break;
		case 3:
			Resultado=Num1*Num2;
			break;
		case 4:
			Resultado=Num1/Num2;
			break;
	}
	std::cout << "\n\nEl resultado de la operaci�n es " << Resultado << ". ";
	return 0;
}
