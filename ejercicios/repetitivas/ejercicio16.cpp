//################################################################################
//Una empresa paga a sus empleados en base a las horas trabajadas en la semana. 
//Realice un algoritmo para determinar el sueldo semanal de N trabajadores y
//y calcule cu�nto pag� la empresa por los N empleados.
//################################################################################
//An�lisis
//Hay que calcular el sueldo de un n�mero de trabajadores, por lo tanto 
//necesitamos el n�mero de trabajadores que tiene la empresa. Tambi�n
//necesitamos saber el sueldo por hora,y por cada trabajador hay que pedir
//las horas que ha trabajado en la semana.
//Por cada trabajador hay que mostrar el sueldo semanal y al finalizar el programa
//mostramos el total de sueldos pagados.
//Datos de entrada: N�mero de trabajadores, sueldo por hora, horas trabajadas por 
//                  cada trabajador.
//Informaci�n de salida: Sueldo de cada trabajador, total pagado.
//Variables: horas_por_semana, horas_acum (Entero), sueldo_por_hora (Real)
//           trabajadores, trabajador(Entero)
//################################################################################
//Dise�o
//1. Inicializo el acumulador de horas
//2. Leer el n�mero de trabajadores
//3. Leer sueldo por hora
//4. Por cada trabajador
//5.   Leer horas trabajadas por semana
//6.   Mostrar sueldo (horas_por_semana*sueldo_por_hora)
//7.   Acumular horas trabajadas
//8. Mostrar total de pago (horas_acum*sueldo_por_hora)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int horas_por_semana, horas_acum;
	float sueldo_por_hora;
	int trabajadores, trabajador;
	
	cout << "�Cu�ntos trabajadores tiene la empresa?: ";
	cin >> trabajadores;
	cout << "Sueldo por hora: ";
	cin >> sueldo_por_hora;
	for(trabajador = 1; trabajador <= trabajadores; trabajador++)
	{
		cout << "�Cu�ntas horas ha trabajado el trabajador " << trabajador << " ? ";
		cin >> horas_por_semana;
		horas_acum = horas_acum + horas_por_semana;
		cout << "El trabajador " << trabajador << " tiene de sueldo " << horas_por_semana * sueldo_por_hora << endl; 
	}
	cout << "El pago a los " << trabajadores << " trabajadores es: " << horas_acum * sueldo_por_hora;
    return 0;
}
