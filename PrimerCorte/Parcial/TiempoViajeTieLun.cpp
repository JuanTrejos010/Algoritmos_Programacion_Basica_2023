#include <iostream>
using namespace std;

int main() {
	float VelocidadLuz=300000, DistanciaTieLun=384400, TiempoViaje;
	std::cout << "Velocidad de la luz (kil�metros por segundo): " << VelocidadLuz;
	std::cout << "\nDistancia de la Tierra a la Luna (kil�metros): " << DistanciaTieLun;
	TiempoViaje=DistanciaTieLun/VelocidadLuz;
	std::cout << "\nTiempo de viaje (segundos): " << TiempoViaje;
}
