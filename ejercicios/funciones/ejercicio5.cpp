//################################################################################
//Crea una funci�n "CalcularMaxMin" que reciba una arreglo con valores n�merico y 
//devuelva el valor m�ximo y el m�nimo. Crea un programa que pida n�meros por 
//teclado y muestre el m�ximo y el m�nimo, utilizando la funci�n anterior.
//################################################################################

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Declaraci�n de la funci�n
void CalcularMaxMin(int vector[10], int size, int &max, int &min);	

int main(int argc, char *argv[]) {
	int lista[10];
	int size_lista, i;
	int vmax, vmin;
	size_lista = 10;
	srand(time(NULL));
	
	//Incializo el vector con valores aleatorios
	for(i = 0; i < size_lista; i++)
	{
		lista[i] = rand() % 100 + 1;
	}
	//En la llamada paso las variables vmax y vmin que se van a modificar en el procedimiento
	CalcularMaxMin(lista, size_lista, vmax, vmin);
	cout << "El valor m�ximo es " << vmax << endl;
	cout << "El valor m�nimo es " << vmin << endl;
	return 0;
}


//################################################################################
//Procedimiento "CalcularMaxMin": Recibe un vector de enteros, su tama�o, y devuelve
//el m�ximo y el m�nimo de los n�meros guardados en el vector.
//Par�metros de entrada: vector de enteros y tama�o
//Par�metros de entrada y salida: valor m�ximo y m�nimo
//################################################################################

void CalcularMaxMin(int vector[], int size, int &max, int &min)
{
	int i;
	max = vector[0];
	min = vector[0];
	for(i = 0; i < size; i++)
	{
		if(max < vector[i])
			max = vector[i];
		if(min > vector[i])
			min = vector[i];
	}
}
