#include <iostream>

int main(){
	float Num;
	std::cout << "Inserta el número: ";
	std::cin >> Num;
	if (Num>0){
		std::cout << Num << " es positivo.";
	} else if (Num==0){
		std::cout << Num << " es neutro.";
	} else {
		std::cout << Num << " es negativo.";
	}
}
