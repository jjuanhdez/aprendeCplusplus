//################################################################################
//Una empresa tiene el registro de las horas que trabaja diariamente un empleado 
//durante la semana (seis d�as) y requiere determinar el total de �stas, as� como 
//el sueldo que recibir� por las horas trabajadas.
//################################################################################
//An�lisis
//Calcular el sueldo y las horas trabajadas de un empleado en una semana (6 d�as).
//Hay que ir introduciendo la cantidad de horas que trabaja cada d�a.
//Tenemos que saber cuanto se paga la hora trabajada.
//Hay que ir acumulando las horas trabajadas cada d�a, para poder calcular el sueldo.
//Datos de entrada: Sueldo por hora, horas.
//Informaci�n de salida: Las horas acumuladas, y el sueldo de la semana.
//Variables: sueldo_por_hora (Real), horas, horas_acum, dia (Entero)
//################################################################################
//Dise�o
//1. Incializo las horas acumuladas
//2. Leer sueldo por hora (sueldo)
//3. Desde el d�a 1 al 6
//4.   Leer horas trabajadas
//5.   Acumular las horas trabajadas
//6. Mostrar Las horas acumuladas
//7. Mostrar el sueldo -> horas acumuladas * sueldo por hora
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float sueldo_por_hora;
	int horas, horas_acum;
	int dia;
	
	cout << "Introduce el sueldo por hora: ";
	cin >> sueldo_por_hora;
	for(dia = 1; dia <= 6; dia++)
	{
		cout << "�Cu�ntas horas has trabajado el d�a " << dia << "?: ";
		cin >> horas;
		horas_acum = horas_acum + horas;
	}
	cout << "Horas acumuladas en la semana: " << horas_acum << endl;
	cout << "Sueldo: " << sueldo_por_hora * horas_acum;
	return 0;
}
