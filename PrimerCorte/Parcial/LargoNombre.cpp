#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char Nombre[40];
	std::cout << "Escribe el nombre: \n";
	std::cin >>Nombre;
	std::cout << "\n\nEl n�mero de letras es: " << strlen(Nombre);
}
