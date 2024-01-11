//################################################################################
//Funci�n "calcularTemperaturaMedia": Recibe dos n�meros reales que representan 
//dos temperaturas y devuelve la temperatura media.
//Par�metros de entrada: dos temperaturas (Real)
//Dato devuelto: La temperatura media (Real)
//################################################################################

#include <iostream>
using namespace std;

//Declaraci�n de la funci�n
float calcularTemperaturaMedia(float temp1, float temp2);	

int main(int argc, char *argv[]) {
	float tmin, tmax;
	int cantidad, indice;
	cout << "�Cu�ntas temperaturas vas a calcular? ";
	cin >> cantidad;
	for(indice = 1; indice <= cantidad; indice++)
	{
		cout << "Introduce temperatura m�nima: ";
		cin >> tmin;
		cout << "Introduce temperatura m�xima: ";
		cin >> tmax;
		cout << "Temperatura media: " << calcularTemperaturaMedia(tmin, tmax) << endl;
	}
	return 0;
}


//################################################################################
//Crear una funci�n que calcule la temperatura media de un d�a a partir de la 
//temperatura m�xima y m�nima. Crear un programa principal que, utilizando la 
//funci�n anterior, vaya pidiendo la temperatura m�xima y m�nima de cada d�a 
//y vaya mostrando la media. El programa pedir� el n�mero de d�as que se van 
//a introducir.
//################################################################################

float calcularTemperaturaMedia(float temp1, float temp2) {
	return (temp1+temp2) / 2;
}
