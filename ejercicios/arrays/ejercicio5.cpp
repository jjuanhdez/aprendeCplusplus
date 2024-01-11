//################################################################################
//Algoritmo que inicialice un vector de n�meros con valores aleatorios, 
//y luego ordene los elementos de menor a mayor.
//################################################################################
//An�lisis
//Inicializo el vector con valores aleatorios. Voy recorriendo el vector e
//intercambio los valores de dos elementos consecutivos si no est�n ordenados.
//Cada vez que hago un intercambio lo cuento, este proceso lo repito hasta que
//no haya realizado ning�n cambio, el vector est� ordenado.
//Datos de entrada: Nada
//Informaci�n de salida: N�meros del vector ordenado.
//Variables: vector (vector de 10 enteros), tam_vector, indice, aux, cambios (Entero)
//################################################################################

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define TAM 10
int main(int argc, char *argv[]) {
	int vector[TAM];
	int cambios, aux;
	int indice;
	srand(time(NULL));
	//Inicializo el vector con valores aleatorios.
	for(indice = 0; indice < TAM; indice++)
		vector[indice] = rand() % 10 + 1;
	//Voy a repetir la ordenaci�n hasta que no haya cambiado ning�n n�mero
	do
	{
		cambios = 0;
		//Recorre hasta el antepen�ltimo
		//Intercambio los valores de dos elementos consecutivos si no est�n ordenados
		for(indice = 0; indice < TAM-1; indice++)
		{
			if(vector[indice] > vector[indice+1])
			{
				aux = vector[indice];
				vector[indice] = vector[indice+1];
				vector[indice+1] = aux;
				cambios++;
			}
		}
	}
	while(cambios != 0);
	//Recorro el vector ordenado
	for(indice = 0; indice < TAM; indice++)
		cout << vector[indice] << " ";
	return 0;
}	
