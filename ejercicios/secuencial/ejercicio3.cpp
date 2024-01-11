//################################################################################
//Dados los catetos de un tri�ngulo rect�ngulo, calcular su hipotenusa.
//################################################################################
//An�lisis
//Tenemos que leer la longitud de los dos catetos y calcular la hipotenusa. 
//(Teorema de Pit�goras)
//Variables de entrada: cateto1 (Real), cateto2 (Real)
//Variables de salida: hipotenusa (Real)
//################################################################################
//Dise�o
// 1. Leer la longitud de los catetos
// 2. Calcular hipotenusa (En un tri�ngulo rect�ngulo el cuadrado de la hipotenusa 
// es igual a la suma de los cuadrados de los catetos. )
// Por lo tanto la hipotenusa es igual a la ra�z cuadrada de la suma de los 
// cuadrados de los catetos.
// 3. Mostrar la hipotenusa
//################################################################################

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float cateto1, cateto2, hipotenusa;
	cout << "Introduce el cateto 1: ";
	cin >> cateto1;
	cout << "Introduce el cateto 2: ";
	cin >> cateto2;
	hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
	cout << "La hipotenusa es " << hipotenusa << endl;
	return 0;
}
