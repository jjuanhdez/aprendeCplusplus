//################################################################################
//Realiza un programa que reciba una cantidad de minutos y muestre por pantalla a 
//cuantas horas y minutos corresponden.
//################################################################################
//Análisis
//Tenemos que leer una cantidad de minutos y calcular cuantas horas y minutos son.
//Datos de entrada: minutos (Entero)
//Información de salida: horas y minutos (Entero)
//Variables: minutos, res_horas, res_minutos (Entero).
//################################################################################
//Diseño
//1. Leer los minutos
//2. Calcular a cuantas horas corresponde, división entera entre 60.
//3. calcular los minutos restantes: resto de la división entre 60.
//4. Mostrar horas y minutos
//################################################################################

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int minutos, res_horas, res_min;
	cout << "Dime la cantidad de minutos: ";
	cin >> minutos;
	res_horas = minutos / 60;
	res_min = minutos % 60;
	cout << res_horas << " horas y " << res_min << " minutos." << endl;	
	return 0;
}
