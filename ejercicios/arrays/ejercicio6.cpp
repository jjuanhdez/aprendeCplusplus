//################################################################################
//Programa que pida un n�mero de mes (por ejemplo, el 4) y diga cu�ntos d�as tiene
//(por ejemplo, 30) y el nombre del mes. Debes usar un vector. 
//Para simplificarlo vamos a suponer que febrero tiene 28 d�as.
//################################################################################
//An�lisis
//Guardo en un vector de 12 posiciones los d�as correspondiente a cada mes.
//Del mismo modo guardo en otro vector los nombres de los meses
//Leo el n�mero de un mes (valido que sea entre 1 a 12) y hago coincide el n�mero
//del mes con el �ndice de los vectores.
//Datos de entrada: N�mero del mes
//Informaci�n de salida: D�as y nombre del mes.
//Variables: dias (vector de 12 enteros), nombre_mes (vector de 12 cadenas),
//           mes (Entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string nombre_mes[12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	int mes;

	do
	{
		cout << "Introduce un mes (1-12): ";
		cin >> mes;
		if(mes < 1 || mes > 12)
			cout << "Error: mes incorrecto.";
	} while (mes<1 || mes>12);
	cout << "El mes de " << nombre_mes[mes-1] << " tiene " << dias[mes-1] << " d�as.";
	return 0;
}
