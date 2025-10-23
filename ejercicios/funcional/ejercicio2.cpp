//################################################################################
//Implementa una función que agregue un nuevo elemento a un vector sin modificar 
// el original. Usa el principio de inmutabilidad: no se cambia el vector original,
// sino que se devuelve una copia modificada.
//################################################################################


#include <iostream>
#include <vector>
using namespace std;

vector<int> agregarSinModificar(const vector<int>& original, int nuevo) {
	vector<int> copia = original;  // Copiamos para preservar el original
	copia.push_back(nuevo);        // Insertamos el nuevo elemento en la copia
	return copia;                  // Retornamos la copia con el cambio
}

int main() {
	vector<int> v = {1, 2, 3};
	
	vector<int> v2 = agregarSinModificar(v, 4);
	
	cout << "Vector original: ";
	for (int num : v) {
		cout << num << " ";
	}
	cout << "\n";
	
	cout << "Vector modificado (copia): ";
	for (int num : v2) {
		cout << num << " ";
	}
	cout << "\n";
	
	return 0;
}
