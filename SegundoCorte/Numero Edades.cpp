#include <iostream>

int main(){
	int NumP,Cont,Sumatoria=0, Promedio;
	std::cout << "¿Cuántas personas hay?\n";
	std::cin >> NumP;
	int Edades[NumP];
	std::cout << "\n\n";
	for (Cont=0; Cont<NumP; Cont+=1){
		std::cout << "Edad\n";
		std::cin >> Edades[Cont];
		std::cout << "\n\n";
		Sumatoria+=Edades[Cont];	
	}
	Promedio=Sumatoria/NumP;
	std::cout << "\nPromedio: " << Promedio << "\n";
	for (Cont=0; Cont<NumP; Cont+=1){
		std::cout << Edades[Cont] << " | ";
	}
	std::cout << "\n\n";
	for (Cont=1; Cont<NumP; Cont+=1){
		if(Edades[0]<Edades[Cont]){
			Edades[0]=Edades[Cont];
		}
	}
	std::cout << "\n\n";
	for (Cont=0; Cont<=NumP; Cont+=1){
		std::cout << Edades[Cont] << " | ";
	}
	std::cout << "\n\n";
	std::cout << "\nEdad mayor: " << Edades[0];
}
