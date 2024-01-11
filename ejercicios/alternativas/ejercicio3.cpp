//################################################################################
//Escribe un programa que lea un n�mero e indique si es par o impar.
//################################################################################
//An�lisis
//Tenemos que pedir un n�mero por teclado, y comprobar si es par o impar.
//Datos de entrada: n�mero (Entero)
//Informaci�n de salida: Un mensaje de texto indicando si el n�mero es par o impar.
//Variables: num (Entero)
//################################################################################
//Dise�o
//1. Leer el numero
//2. Si el resto de dividir el n�mero entre 2 es igual a 0 el n�mero es par.
//3. En caso contrario es impar
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num;
    cout << "Dime el n�mero: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Es par";
    }
    else
    {
        cout << "Es impar";
    }
    return 0;
}
