//################################################################################
// Implementar una función plantilla llamada intercambiar que tome dos referencias
// y las intercambie. Luego prueba esta función con diferentes tipos de datos 
// (int, float, string).
// 
// Objetivo: Entender el uso de referencias en templated funciones para manipular 
// datos genéricos.
//################################################################################


#include <iostream>
using namespace std;

template<typename T>
void intercambiar(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 1, y = 2;
	intercambiar(x, y);
	cout << "Enteros después del intercambio: " << x << " " << y << endl;
	
	string s1 = "Primero", s2 = "Segundo";
	intercambiar(s1, s2);
	cout << "Cadenas después del intercambio: " << s1 << " " << s2 << endl;
	
	return 0;
}
