//################################################################################
//Algoritmo que pida un n�mero y diga si es positivo, negativo o 0.
//################################################################################
//An�lisis
//Tenemos que pedir un n�mero por teclado, compararlo con 0, e indicar si es igual, 
//mayor o menor que 0.
//Datos de entrada: n�mero (Entero)
//Informaci�n de salida: Un mensaje de texto indicando si el n�mero es igual, 
//mayor o menor que 0.
//Variables: num (Entero)
//################################################################################
//Dise�o
//1. Leer el numero
//2. Si el n�mero es igual 0 escribir "Es igual a 0"
//3. En caso contrario si es mayor que 0 escribir "Es mayor que 0"
//4. En otro caso escribir "Es menor que 0"
//#################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num;
    cout << "Dime el n�mero: ";
    cin >> num;
	if (num == 0)
    {
        cout << "Es igual a 0";
    }
    else
    {
        if (num > 0)
        {
            cout << "Es positivo";
        }
        else
        {
            cout << "Es negativo";
        }
    }
	return 0;
}
