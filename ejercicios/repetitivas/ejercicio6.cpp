//################################################################################
//Escribir un programa que imprima todos los n�meros pares entre dos n�meros que 
//se le pidan al usuario.
//################################################################################
//An�lisis
//Leemos un n�mero. Si es impar, le sumo 1 y ya es par. Leemos el segundo n�mero.
//Escribo el n�mero desde el primero hasta el segundo de dos en dos.
//Datos de entrada: dos n�meros
//Informaci�n de salida: Los n�meros pares que hay entre los dos anteriores
//Variables: num, num1,num2 (Entero)
//################################################################################
//Dise�o
//1. Leer num1, num2
//2. Si num1 es impar -> num1 = num1 + 1
//3. Desde num1 hasta num2 de 2 en 2
//4.   Escribir el n�mero
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num, num1, num2;
	cout << "Introduce el n�mero 1: ";
	cin >> num1;
	cout << "Introduce el n�mero 2: ";
	cin >> num2;
	
	if(num1 % 2 == 1) num1++;
	
	for(num = num1; num <= num2; num = num + 2)
		cout << num << " ";
	
	return 0;
}
