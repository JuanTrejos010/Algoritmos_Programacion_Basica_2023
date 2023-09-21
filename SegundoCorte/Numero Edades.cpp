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
	int EdadMayor=Edades[0];
	int EdadMenor=Edades[0];
	for (Cont=0; Cont<NumP; Cont+=1){
		std::cout << Edades[Cont] << " | ";
		if(Edades[Cont]>EdadMayor){
			EdadMayor=Edades[Cont];
		}
		if(Edades[Cont]<EdadMenor){
			EdadMenor=Edades[Cont];
		}
	}
	std::cout << "\n\n";
	std::cout << "\nPromedio: " << Promedio << "\n";
	std::cout << "\n\n";
	std::cout << "Edad menor: " << EdadMenor;
	std::cout << "\nEdad mayor: " << EdadMayor;
}
