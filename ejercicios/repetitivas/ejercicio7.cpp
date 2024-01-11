//################################################################################
//Realizar un algoritmo que muestre la tabla de multiplicar de un n�mero 
//introducido por teclado.
//################################################################################
//An�lisis
//Leemos el n�mero del que queremos mostrar la tabla
//Necesitamos un contador para contar de 1 a 10
//Tenemos que repetir 10 veces -> En cada vuelta debemos mostrar:
//el contador * el numero = resultado de la multiplicaci�n
//Datos de entrada: El n�mero de la tabla, y un contador de 1 a 10.
//Informaci�n de salida: Las 10 operaciones de la tabla de multiplicaci�n
//Variables: tabla, num (Entero)
//################################################################################
//Dise�o
//1. Leer tabla
//2. Desde numero de 1 a 10
//3. Mostrar num * tabla = (num*tabla)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int tabla,num;
	cout << "�De qu� n�mero quieres mostrar la tabla de multiplicar?: ";
	cin >> tabla;
	for(num = 1; num <= 10; num++)
	{
		cout << num << "*" << tabla << " = " << num*tabla << endl;
	}
	return 0;
}
