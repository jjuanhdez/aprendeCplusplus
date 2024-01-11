//################################################################################
//Una persona se encuentra en el kil�metro 70 de una carretera, otra se encuentra 
//en el km 150, los coches tienen sentido opuesto y tienen la misma velocidad. 
//Algoritmo para determinar en qu� kil�metro de esa carretera se encontrar�n.
//################################################################################
//An�lisis
//Tengo que calcular en que km se van a encontrar los coches. Sabemos que van en
//sentido opuesto por lo tanto, si llevan la misma velocidad, el primero va a ir
//incrementando el km donde se encuentra y el segundo va a ir decrement�ndolo.
//Cuando coincidan en el mismo km, podemos considerar que se han encontrado.
//Datos de entrada: Nada, vamos a inicializar las variables donde guardamos los km 
//Informaci�n de salida: El km donde se encuentran.
//Variables: km1, km2 (Entero)
//################################################################################
//Dise�o
//1. Inicializo las variables kms
//2. Mientras km1 <> km2
//3.   Incremento km1
//4.   Decremento km2
//5. Mostrar en el km que se encuentran
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int km1, km2;
	km1 = 70;
	km2 = 150;
	while(km1 != km2)
	{
		km1++;
		km2--;
	}
	
	cout << "Se encuentran en el km: " << km1;
	return 0;
}
