#include <iostream>
using namespace std;

int main(){
	int Opcion, Cont;
	std::cout << "Opciones de contadores:\n1 | 2" << endl;
	std::cin >> Opcion;
	if (Opcion==1) {
		for (Cont=10; Cont <=1000;Cont+=5) {
			std::cout << Cont << endl;
		}
	} else if (Opcion==2) {
		for (Cont=1000; Cont >=10;Cont-=5) {
			std::cout << Cont << endl;
		}
	} else {
		std::cout << "\n\nEstamos cansados de contadores.";
	}
}

