//################################################################################
// Implementar una funci�n que reciba varios n�meros enteros y devuelva su suma. 
// Escribe esta funci�n como una funci�n pura, sin modificar variables externas, 
// s�lo tomando los valores de entrada y devolviendo el resultado.
//
// Pista: std::initializer_list permite pasar f�cilmente un n�mero variable de 
// argumentos con una sintaxis sencilla { ... }.
//################################################################################


#include <iostream>
#include <initializer_list>
using namespace std;

int sumaVarios(std::initializer_list<int> nums) {
	int total = 0;
	for (int n : nums) {
		total += n;
	}
	return total;
}

int main() {
	cout << sumaVarios({1, 2, 3, 4, 5}) << "\n";  // 15
	cout << sumaVarios({10, 20}) << "\n";        // 30
	return 0;
}
