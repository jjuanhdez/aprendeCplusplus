//################################################################################
//Queremos guardar los nombres y la edades de los alumnos de un curso. 
//Realizar un programa que introduzca el nombre y la edad de cada alumno. 
//El proceso de lectura de datos terminar� cuando se introduzca como nombre 
//un asterisco (*). Al finalizar se mostrar� los siguientes datos:
// * Todos los alumnos mayores de edad.
// * Los alumnos mayores (los que tienen m�s edad)
//################################################################################
//An�lisis
//Inicializo los vectores hasta que introduzca un "*" o llegue a final del vector.
//El * sirve para indicar el final del vector. 
//Hago un recorrido para mostrar los alumnos mayores de edad.
//Hago un recorrido (hasta encontrar un * o llega al final) para calcular la edad
//m�xima. A continuaci�n recorro los arrays, y muestro el nombre de los alumnos
//con mayor edad.
//Datos de entrada: Nombre y edad de los alumnos, hasta introducir *.
//Informaci�n de salida: Los alumnos mayores de edad, y los alumnos de mayor edad
//Variables: edad (vector de 30 enteros), nombre (vector de 30 cadenas)
//           indice, tam_vector, edad_max (Entero)
//################################################################################

#include <iostream>
using namespace std;

#define TAM 30
int main(int argc, char *argv[]) {
	int edad[TAM];
	string nombre[TAM];
	int edad_max;
	int indice = 0;
	
	//Inicializo los vectores hasta que introduzca un "*" o llegue a final del vector
	//El * sirve para indicar el final del vector
	do
	{
		cout << "Dime el nombre de un alumno: ";
		getline(cin, nombre[indice]);
		
		if(nombre[indice] != "*")
		{
			cout << "Dime su edad: ";
			cin >> edad[indice];
			cin.ignore(); //M�s informaci�n https://es.stackoverflow.com/questions/193829/porque-es-necesario-usar-el-comando-cin-ignore-despu%C3%A9s-de-usar-cin-y-lue
		}
		indice++;
	}
	while(nombre[indice-1] != "*" && indice != TAM);
	indice = 0;
	//Calcular la edad m�xima
	//El recorrido es hasta que no encuentre un * y no hayamos llegado al final del vector
	edad_max = edad[0];
	while(indice < TAM && nombre[indice] != "*")
	{
		if(edad[indice] > edad_max)
			edad_max = edad[indice];
		indice++;
	}
	// Alumnos mayores de edad
	indice = 0;
	cout << "Alumnos mayores de edad" << endl;
	cout << "=======================" << endl;
	while(indice < TAM && nombre[indice] != "*")
	{
		if(edad[indice] > 18)
			cout << nombre[indice] << endl;
		indice++;
	}
	// Alumnos mayores 
	indice = 0;
	cout << "Alumnos mayores" << endl;
	cout << "===============" << endl;
	while(indice < TAM && nombre[indice] != "*")
	{
		if(edad[indice] == edad_max)
			cout << nombre[indice] << endl;
		indice++;
	}
	return 0;
}
