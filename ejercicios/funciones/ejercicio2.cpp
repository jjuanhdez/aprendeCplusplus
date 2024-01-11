//################################################################################
//Crea un programa que pida dos n�mero enteros al usuario y diga si alguno de ellos 
//es m�ltiplo del otro. Crea una funci�n "EsMultiplo" que reciba los dos n�meros, 
//y devuelva si el primero es m�ltiplo del segundo.
//################################################################################

#include <iostream>
using namespace std;

//Declaraci�n de la funci�n
bool EsMultiplo(int num1, int num2);	

int main(int argc, char *argv[]) {
	int numero1, numero2;
	cout << "N�mero 1: ";
	cin >> numero1;
	cout << "N�mero 2: ";
	cin >> numero2;
	if(EsMultiplo(numero1, numero2))
		cout << numero1 << " es m�ltiplo de " << numero2;
	else
		cout << numero1 << " no es m�ltiplo de " << numero2;
	return 0;
}


//################################################################################
//Funci�n "EsMultiplo": Recibe dos n�mero e indica si el primero el m�ltiplo del 
//segundo. Para ello calculo el resto de la divisi�n, si es 0 es m�ltiplo.
//Par�metros de entrada: dos n�meros
//Dato devuelto: m�ltiplo: Valor l�gico verdadero si el primero es m�ltiplo 
//               del segundo, Falso en caso contrario.
//################################################################################

bool EsMultiplo(int num1, int num2) {
	if (num1 % num2 == 0) return true;
	else return false;
}
