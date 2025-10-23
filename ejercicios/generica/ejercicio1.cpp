//################################################################################
// Escribir una plantilla de funci�n que acepte dos par�metros de cualquier tipo 
// y devuelva el mayor.
// 
// Objetivo: Familiarizarse con plantillas de funciones y operadores de comparaci�n.
//################################################################################


#include <iostream>
using namespace std;

// Plantilla para funci�n maximo
template<typename T>
T maximo(T a, T b) {
	return (a > b) ? a : b;
}

int main() {
	int x = 5, y = 8;
	double p = 3.2, q = 2.9;
	
	cout << "Maximo int: " << maximo(x, y) << endl;
	cout << "Maximo double: " << maximo(p, q) << endl;
	
	return 0;
}
