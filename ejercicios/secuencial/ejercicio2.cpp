//################################################################################
//Realiza un programa que reciba una cantidad de minutos y muestre por pantalla a 
//cuantas horas y minutos corresponden.
//################################################################################
//An�lisis
//Tenemos que leer una cantidad de minutos y calcular cuantas horas y minutos son.
//Datos de entrada: minutos (Entero)
//Informaci�n de salida: horas y minutos (Entero)
//Variables: minutos, res_horas, res_minutos (Entero).
//################################################################################
//Dise�o
//1. Leer los minutos
//2. Calcular a cuantas horas corresponde, divisi�n entera entre 60.
//3. calcular los minutos restantes: resto de la divisi�n entre 60.
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