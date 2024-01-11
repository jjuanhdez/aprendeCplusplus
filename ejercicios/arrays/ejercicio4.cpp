//################################################################################
//Programa que declare un vector de diez elementos enteros y pida n�meros para 
//rellenarlo hasta que se llene el vector o se introduzca un n�mero negativo. 
//Entonces se debe imprimir el vector (s�lo los elementos introducidos).
//################################################################################
//An�lisis
//Recorro el vector y voy inicializando sus elementos. Si introduzco un n�mero 
//negativo salimos del bucle. Tambi�n termino el bucle si introduzco todos los 
//elementos de vector. El n�mero negativo me sirve de indicador de que hasta 
//esa posici�n el vector tiene elementos. 
//Recorro hasta el tama�o del vector o encuentre un n�mero negativo para mostrar 
//los elementos del vector.
//Datos de entrada: Leo n�mero positivos y los guardo en el vector, hasta que lea 
//                  un n�mero negativo o lea todos los elementos del vector.
//Informaci�n de salida: Los elementos (n�meros positivos) guardados en el vector.
//Variables: vector (vector de 10 enteros), tam_vector,indice,num (Entero)
//################################################################################

#include <iostream>
using namespace std;

#define TAM 10
int main(int argc, char *argv[]) {
	int vector[TAM];
	int indice, num;
	
	//Recorro el vector y voy inicializando sus elementos
	//No uso un for, porque si introduzco un n�mero negativo salimos del bucle.
	//Termina el bucle si introduzco todos los elementos del vector.
	//Un n�mero negativo sirve de indicador de que hasta esa posici�n el vector tiene elementos
	do
	{
		cout << "Introduce un n�mero en el vector. N�mero " << indice+1 <<": ";
		cin >> vector[indice];
		indice++;
	} while (indice < TAM && vector[indice-1] >= 0);
	
	indice = 0;
	//Recorro hasta el tama�o del vector o encuentre un n�mero negativo.
	cout << "Elementos del vector: ";
	while(indice <= TAM-1 && vector[indice] >= 0)
	{
		cout << vector[indice] << " ";
		indice++;
	}
	return 0;
}
