//################################################################################
//Una empresa paga a sus empleados en base a las horas trabajadas en la semana
//Para esto, se registran los d�as que trabaj� y las horas de cada d�a. 
//Realice un algoritmo para determinar el sueldo semanal de N trabajadores y
//calcule cu�nto pag� la empresa por los N empleados.
//################################################################################
//An�lisis
//Hay que calcular el sueldo de un n�mero de trabajadores, por lo tanto 
//necesitamos el n�mero de trabajadores que tiene la empresa. Tambi�n
//necesitamos saber el sueldo por hora,y por cada trabajador hay que pedir
//los d�as que ha trabajado en la semana y las horas que ha trabajado cada d�a.
//Por cada trabajador hay que mostrar el sueldo semanal y al finalizar el programa
//mostramos el total de sueldos pagados.
//Datos de entrada: N�mero de trabajadores, sueldo por hora, d�as trabajador por 
//                  semana, horas trabajadas por cada trabajador.
//Informaci�n de salida: Sueldo de cada trabajador, total pagado.
//Variables: horas, horas_por_trabajador, horas_acum (Entero), sueldo_por_hora (Real)
//           trabajadores, trabajador, dia (Entero)
//################################################################################
//Dise�o
// 1. Inicializo el acumulador de horas
// 2. Leer el n�mero de trabajadores
// 3. Leer sueldo por hora
// 4. Por cada trabajador
// 5.   Inicializar el acumulador de horas_por_trabajador
// 6.   Por cada d�a
// 7.     Leer horas
// 8.     Acumular horas trabajadas por trabajador
// 9.   Mostrar sueldo (horas_por_trabajador*sueldo_por_hora)
//10. Mostrar total de pago (horas_acum*sueldo_por_hora)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dias, horas;
	int horas_por_trabajador, horas_acum;
	int dia, trabajador;
	float sueldo_por_hora;
	int trabajadores;
	
	cout << "�Cu�ntos trabajadores tiene la empresa? ";
	cin >> trabajadores;
	cout << "Sueldo por hora: ";
	cin >> sueldo_por_hora;
	
	for(trabajador = 1; trabajador <= trabajadores; trabajador++)
	{
		horas_por_trabajador = 0;
		cout << "�Cu�ntos d�as ha trabajado el trabajador " << trabajador << "? ";
		cin >> dias;
		for(dia = 1; dia <= dias; dia++)
		{
			cout << "�Cu�ntas horas ha trabajado el trabajador " << trabajador << " el d�a " << dia << "? ";
			cin >> horas;
			horas_por_trabajador = horas_por_trabajador + horas;
		}
		cout << "El trabajador " << trabajador << " tiene de sueldo " << horas_por_trabajador * sueldo_por_hora << endl; 
		horas_acum = horas_acum + horas_por_trabajador;
	}
	cout << "El pago a los " << trabajadores << " trabajadores es: " << horas_acum * sueldo_por_hora;
	return 0;
}
