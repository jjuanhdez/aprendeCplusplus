//################################################################################
//Algoritmo que diga si un n�mero introducido por teclado es o no primo. 
//Un n�mero primo es aquel que s�lo es divisible entre �l mismo y la unidad. 
//Nota: Es suficiente probar hasta la ra�z cuadrada del n�mero para ver si es 
//divisible por alg�n otro n�mero.
//################################################################################
//An�lisis
//Leemos un n�mero y vamos comprobando si es divisible entre 2 hasta la ra�z
//cuadrada del n�mero. Si es divisible por alg�n n�mero no es primo.
//Si no es divisible por ning�n n�mero es primo.
//Para saber si es divisible usamos el operador m�dulo.
//Datos de entrada: el n�mero a comprobar si es primo o no
//Informaci�n de salida: Un mensaje diciendo si es primo o no
//Variables: numero_es_primo (Entero), num (Entero) contador desde 2 hasta 
//           ra�z cuadrada del num_es_primo, es_primo (Logico)
//################################################################################
//Dise�o
//1. Supongo que el n�mero es primo -> es_primo <- Verdadero
//2. Leer num_es_primo
//3. Desde num = 2 hasta ra�z(numero_es_rpimo)
//4.    Si numero_es_primo es divisible entre num -> es_primo <- Falso
//5. Si es_primo -> Mostrar "Es primo"
//6. Si no -> Mostrar "No es primo"
//################################################################################

#include <math.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero_es_primo, num;
	bool es_primo;
	es_primo = true;
	cout << "Introduce un n�mero para comprobar si es primo: ";
	cin >> numero_es_primo;
	for(num = 2; num <= sqrt(numero_es_primo); num++)
	{
		if(numero_es_primo % num == 0)
			es_primo = false;
	}
	if(es_primo)
		cout << "Es Primo" << endl;
	else
		cout << "No es Primo" << endl;
	return 0;
}
