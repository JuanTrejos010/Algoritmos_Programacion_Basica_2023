#include <iostream>
using namespace std;

int main(){
	int Edad;
	std::cout << "¡Cuál es su edad?\n";
	std::cin >> Edad;
	if (Edad < 18) {
		std::cout << "Joven.";
	} else if (Edad ==18) {
		std::cout << "Medio.";		
	} else {
		std::cout << "Viejo.";
	}
}
