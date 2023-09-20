#include <iostream>
using namespace std;

int main(void){
	string password;
	//char Nombre[125];
	int Consulta, DiasT, Salario, SubsidioT, HorasExtrasD, HorasExtrasN, HorasExtrasDomD, SalDiv, TotalHE;
	std::cout << "\nIngresa la contraseña\n";
	std::cin >> password;
	if (password=="MiClave"){
		std::cout << "\n\nContraseña correcta\n\n";
		//std::cout << "Escribe tu nombre: ";
		//std::cin >> Nombre;
		std::cout <<"\n\n¿Qué deseas consultar?\n-- 1) Subsidio de transporte -- 2)Horas extras\n";
		std::cin >>Consulta;
		while (Consulta<1 || Consulta >2){
			std::cout << "Valor inválido.\n";
			std::cin >>Consulta;
		}
		switch (Consulta){
			case 1:
				std::cout<< "Subsidio de transporte\n\nInserta el salario";
				std::cin >> Salario;
				if (Salario<2320000){
					std::cout << "\n\n¿Cuántos fueron los días trabajados?\n";
					std::cin >> DiasT;
					SubsidioT=120000/30*DiasT;
					std::cout << "\n\nEl subsidio es de " << SubsidioT << ".";
				} else {
					std::cout << "\n\nCon el salario de " << Salario <<", no hay subsidio de transporte.";
				}
				break;
			case 2:
				std::cout << "Horas extra\n\nInserta el salario:\n";
				std::cin >> Salario;
				SalDiv=Salario/240;
				std::cout << "\n\nInserta las horas extras diurnas:\n";
				std::cin >> HorasExtrasD;
				std::cout << "\n\nInserta las horas extras nocturnas:\n";
				std::cin >> HorasExtrasN;
				std::cout << "\n\nInserta las horas extras dominicales diurnas:\n";
				std::cin >> HorasExtrasDomD;
				TotalHE=SalDiv*(1.25*HorasExtrasD+1.75*HorasExtrasN+2*HorasExtrasDomD);
				std::cout << "El total para horas extras es " << TotalHE;
				break;
		}
	} else {
		std::cout << "\n\nContraseña incorrecta";
	}
}
