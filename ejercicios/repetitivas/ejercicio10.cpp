//################################################################################
//Algoritmo que muestre la tabla de multiplicar de los n�meros 1,2,3,4 y 5.
//################################################################################
//An�lisis
//Debo repetir 5 veces (desde el n�mero 1 hasta el 5) la tabla de multiplicar de 
//ese n�mero.
//Como vimos en otro ejercicio para una tabla de multiplicar debemos repetir
//10 veces para mostrar cada l�nea de la tabla.
//Por lo tanto necesito dos bucles anidados.
//Datos de entrada: Nada
//Informaci�n de salida: Las cinco tablas de multiplicar
//Variables: tabla, num (Entero)
//################################################################################
//Dise�o
//1. Para tabla desde 1 hasta 5
//2.   Para num desde 1 hasta 10
//3.     Mostrar tabla * num = (tabla*num)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int tabla, num;
	for(tabla = 1; tabla <= 5; tabla++)
	{
		for(num = 1; num <= 10; num++)
		{	
			cout << num << "*" << tabla << " = " << num*tabla << endl;
		}
		cout << "Pulse una tecla para continuar..." << endl;
		cin.get(); // a diferencia del pseudoc�digo, espera un Enter, no cualquier tecla
	}
	return 0;
}
