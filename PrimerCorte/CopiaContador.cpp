#include <iostream>



using namespace std;



int main(){



int contador=0; // Empieza en 0

string arreglo[5]={"primer dato", "segundo texto", "80", "titulo", "fin"};



while (contador<5){ // Mientras sea menor que 5 (Explicacion abajo)

    cout << arreglo[contador] << endl; // Explicacion abajo

    contador++;

}



system("pause");

}
