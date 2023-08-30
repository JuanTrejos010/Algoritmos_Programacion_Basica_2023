#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int Operacion;
	float Num1, Num2, Resultado;
	std::cout << "--- Operaciones básicas ---\n\n";
	std::cout << "Escribe la operación por hacer.\n 1)Suma | 2)Resta | 3) Multiplicación |4)División |5)Potenciación |6)Radicación\n";
	std::cin >> Operacion;
	switch (Operacion){
		case 1:
			std::cout << "\nInserta el primer sumando.\n";
			std::cin >> Num1;
			std::cout << "Inserta el segundo sumando.\n";
			std::cin >> Num2;
			Resultado=Num1+Num2;
			std::cout<< "\n\nEl resultado es de " << Resultado;
			break;
		case 2:
			std::cout << "\nInserta el minuendo.\n";
			std::cin >> Num1;
			std::cout << "Inserta el sustraendo.\n";
			std::cin >> Num2;
			Resultado=Num1-Num2;
			std::cout<< "\n\nEl resultado es de " << Resultado;
			break;
		case 3:
			std::cout << "\nInserta el primer factor.\n";
			std::cin >> Num1;
			std::cout << "Inserta el segundo factor.\n";
			std::cin >> Num2;
			Resultado=Num1*Num2;
			std::cout<< "\n\nEl resultado es de " << Resultado;
			break;
		case 4:
			std::cout << "\nInserta el dividendo.\n";
			std::cin >>Num1;
			std::cout << "Inserta el divisor.\n";
			std::cin >> Num2;
			Resultado=Num1/Num2;
			std::cout<< "\n\nEl resultado es de " << Resultado;
			break;
		case 5:
			std::cout << "\nInserta la base.\n";
			std::cin >>Num1;
			std::cout << "Inserta el exponente.\n";
			std::cin >> Num2;
			Resultado=pow(Num1,Num2);
			std::cout<< "\n\nEl resultado es de " << Resultado;
			break;
		case 6:
			std::cout << "\nInserta el radicando.\n";
			std::cin >>Num1;
			std::cout << "Inserta el índice.\n";
			std::cin >> Num2;
			Resultado=pow(Num1,1/Num2);
			std::cout<< "El resultado es de " << Resultado;
			break;
		default:
			std::cout<<"Operación no reconocida.";
			break;
	}
	std::cout << "\n\n\nRecuerda que en el mundo hay genios y talentos.";
}
