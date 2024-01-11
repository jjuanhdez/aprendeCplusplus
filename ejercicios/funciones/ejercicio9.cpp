//################################################################################
//Crear un programa principal que lea dos n�meros enteros y muestre el MCD.
//################################################################################

#include <iostream>
using namespace std;

//Declaraci�n de la funciones
int CalcularMCD(int num1, int num2);
void Intercambiar(int &mayor, int &menor);

int main(int argc, char *argv[]) {
	int numero1, numero2;
	cout << "N�mero 1: ";
	cin >> numero1;
	cout << "N�mero 2: ";
	cin >> numero2;
	cout << "MCD: " << CalcularMCD(numero1, numero2);
	return 0;
}


//################################################################################
//Funci�n "CalcularMCD": Recibe dos n�meros y devuelve el MCD utilizando el m�todo 
//de Euclides. El m�todo de Euclides es el siguiente:
// * Se divide el n�mero mayor entre el menor.
// * Si la divisi�n es exacta, el divisor es el MCD.
// * Si la divisi�n no es exacta, dividimos el divisor entre el resto obtenido y 
//   se contin�a de esta forma Hasta obtener una divisi�n exacta, siendo el �ltimo
//   divisor el MCD.
//Par�metros de entrada: dos n�meros
//Dato devuelto: El MCD
//################################################################################

int CalcularMCD(int num1, int num2) {
	int resto;
	//Se divide el n�mero mayor entre el menor.
	Intercambiar(num1, num2);
	resto = num1 % num2;
	if(resto == 0) //Si la divisi�n es exacta, el divisor es el MCD.
		return num2;
	else
		//Si la divisi�n no es exacta, dividimos el divisor entre el resto obtenido y 
		//se contin�a de esta forma hasta obtener una divisi�n exacta, siendo el �ltimo divisor el MCD.
		return CalcularMCD(num2, resto);
}

//################################################################################
//Procedimiento "Intercambiar": Recibe dos n�meros como par�metros de entrada y 
//salida e intercambia sus valores si el segundo es mayor que el primero.
//Par�metros de entrada y salida: dos n�meros
//################################################################################

void Intercambiar(int &mayor, int &menor) {
	int aux;
	if(mayor < menor)
	{
		aux = mayor;
		mayor = menor;
		menor = aux;
	}
}
