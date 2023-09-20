#include <iostream>

int main() {
	int Edades[5];
	std::cout << "-- 5 edades --\n";
	for(int Cont=0; Cont < 5; Cont++){
		std::cout << "\nEdad " << Cont+1 << ": ";
		std::cin >> Edades[Cont];
	} 
	std::cout << "\n\nLas edades son: ";
	for(int Cont=0; Cont < 5; Cont++){
		std::cout << Edades[Cont];
		if (Cont < 4){
			std::cout << ", ";
		} else {
			std::cout << ".";
		}
	}
}
