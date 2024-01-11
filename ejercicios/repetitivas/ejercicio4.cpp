//################################################################################
//Algoritmo que pida n�meros (pedir� por teclado la cantidad de n�meros a 
//introducir). El programa debe informar de cuantos n�meros introducidos son 
//mayores que 0, menores que 0 e iguales a 0.
//################################################################################
//An�lisis
//Se pide la cantidad de n�meros que se van a leer. Vamos introduciendo n�meros.
//Tenemos que contar los positivos, negativos y 0.
//Datos de entrada: Cantidad de n�meros, los n�meros.
//Informaci�n de salida: Cantidad de positivos, de negativos y de 0.
//Variables: cantidad_num, num, cont_positivos, cont_negativos, cont_ceros (Entero)
//################################################################################
//Dise�o
//1. Inicializo los contadores
//2. Leer cantidad de n�meros
//3. Desde 1 hasta cantidad de n�meros
//4.   Leer num
//5.   Si num > 0 -> incremento cont_positivos
//6.   Si num < 0 -> incremento cont_negativos
//7.   Si num = 0 -> incremento cont_ceros
//8. Muestro cont_postivos, cont_negativos, cont_ceros
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	int cantidad_num, i;
	int cont_negativos, cont_positivos, cont_ceros;
	cont_negativos = 0;
	cont_positivos = 0;
	cont_ceros = 0;
	cout << "�Cu�ntos n�meros vas a introducir?: ";
	cin >> cantidad_num;
	for(i = 1; i <= cantidad_num; i++) {
		cout << "N�mero " << i << ": " ;
		cin >> num;
		if(num > 0) {
			cont_positivos = cont_positivos + 1;
		}
		else
		{
			if(num < 0) {
				cont_negativos++;
			}
			else
			{
				cont_ceros++;
			}
		}
	}
	cout << "N�meros positivos: " << cont_positivos << endl;
	cout << "N�meros negativos: " << cont_negativos << endl;
	cout << "N�meros igual a 0: " << cont_ceros << endl;
	return 0;
}
