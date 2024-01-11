//################################################################################
//Un ciclista parte de una ciudad A a las HH horas, MM minutos y SS segundos. 
//El tiempo de viaje hasta llegar a otra ciudad B es de T segundos. 
//Escribir un algoritmo que determine la hora de llegada a la ciudad B.
//################################################################################
//An�lisis
//Tenemos que pedir la hora de salida (hora, minutos y segundos).
//Tenemos que saber tambi�n el tiempo, en segundos, que ha tardado en llegar. 
//Tenemos que calcular la hora de llegada.
//Datos de entrada: hora, minutos y segundos de salida (Entero), 
//                  segundos que tarda (Entero).
//Informaci�n de salida: hora, minutos y segundos de llegada (Entero)
//Variables: horapartida, minpartida, segpartida, segviaje, horallegada, 
//           minllegada, segllegada (Entero)
//################################################################################
//Dise�o
//1. Leer hora de salida
//2. Leer segundos que tarda
//3. Convierto la hora de salida a segundos (necesito una variable seginicial)
//4. Le sumo los segundos que he tardado (necesito una variable segfinal)
//5. Convierto los segundos totales a horas, minutos y segundos
//6. Muestro la hora de llegada
//################################################################################

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int horapartida, minpartida, segpartida;
	int horallegada, minllegada, segllegada;
	int segfinal, seginicial, segviaje;
	cout << "Hora de salida: ";
	cin >> horapartida;
	cout << "Minutos de salida: ";
	cin >> minpartida;
	cout << "Segundos de salida: ";
	cin >> segpartida;
	cout << "Tiempo que has tardado en segundos: ";
	cin >> segviaje;
	// Convierto la hora de salida a segundos
	seginicial = horapartida * 3600 + minpartida * 60 + segpartida;
	// Le sumo los segundos que he tardado
	segfinal = seginicial + segviaje;
	// Convierto los segundos totales a horas, minutos y segundos
	horallegada = segfinal / 3600;
	minllegada = (segfinal % 3600) / 60;
	segllegada = (segfinal % 3600) % 60;
	// Muestro la hora de llegada
	cout << "Hora de llegada" << endl;
	cout << horallegada << ":" << minllegada << ":" << segllegada << endl;
	return 0;
}

