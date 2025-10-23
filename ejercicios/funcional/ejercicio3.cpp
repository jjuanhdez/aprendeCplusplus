//################################################################################
//  Implementa una funci�n que filtre y devuelva s�lo los n�meros pares de un vector.
//
// Pista: std::copy_if copia los elementos que cumplen la condici�n en la lambda.
//################################################################################


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> filtrarPares(const vector<int>& numeros) {
	vector<int> pares;
	copy_if(numeros.begin(), numeros.end(), back_inserter(pares),
				 [](int x) { return x % 2 == 0; });  // Condici�n: n�mero par
	
	return pares;
}

int main() {
	vector<int> entrada = {1, 2, 3, 4, 5, 6};	    // Vector con n�meros de ejemplo
	vector<int> soloPares = filtrarPares(entrada);  // pares = {2, 4, 6}
	
	cout << "N�meros pares: ";
	// Bucle for iterando entre los elementos del vector
	for (int num : soloPares) {
		cout << num << " ";
	}
	cout << endl;
	// Bucle for tradicional con variable i desde 0 hasta tama�o del vector menos 1
	for (int i = 0; i < static_cast<int>(soloPares.size()); i++) {
		cout << soloPares[i] << " ";
	}
	cout << endl;
	
	return 0;
}
