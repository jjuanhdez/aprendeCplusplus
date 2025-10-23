//################################################################################
// Escribir una plantilla de función que acepte dos parámetros de cualquier tipo 
// y devuelva el mayor.
// 
// Objetivo: Familiarizarse con plantillas de funciones y operadores de comparación.
//################################################################################


#include <iostream>
using namespace std;

// Plantilla para función maximo
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
