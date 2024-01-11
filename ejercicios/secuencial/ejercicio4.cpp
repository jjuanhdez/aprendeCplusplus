//################################################################################
//Dados dos números, mostrar la suma, resta, división y multiplicación de ambos.
//################################################################################
//Análisis
//Tenemos que leer dos números, calcular la suma, resta, multiplicación y división
//Datos de entrada: Los dos números (Real)
//Información de salida: suma, resta, multiplicación, división (Real)
//Variables: num1, num2 (Real). 
//Considero que las salidas no es necesario guardarla en variables.
//################################################################################
//Diseño
//1. Leer los números
//2. Mostrar la suma, resta, multiplicación y división
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float num1, num2;
	cout << "Introduce el número 1: ";
	cin >> num1;
	cout << "Introduce el número 2: ";
	cin >> num2;
	cout << "La suma es  " << num1+num2 << endl;
	cout << "La resta es " << num1-num2 << endl;
	cout << "El producto es " << num1*num2 << endl;
	cout << "La división es " << num1/num2 << endl;
	return 0;
}
