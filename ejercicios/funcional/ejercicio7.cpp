//################################################################################
// Escribir una funci�n que tome una operaci�n (funci�n) y un n�mero 
// y aplique esa operaci�n al conjunto de n�meros.
// Funci�n que recibe una funci�n como argumento.
//################################################################################


#include <iostream>
#include <vector>
#include <functional>
using namespace std;

vector<int> aplicarOperacion(
	const vector<int>& numeros,
	function<int(int)> operacion) {
	vector<int> resultado;
	resultado.reserve(numeros.size());
	for (int num : numeros) {
		resultado.push_back(operacion(num));
	}
	return resultado;
}

int main() {
    auto sumados = aplicarOperacion({1, 5, 8}, [](int x) { return x + 5; });
    cout << "Resultado de sumar 5 a cada elemento:";
    for (auto v : sumados) {
		cout << " " << v;
	}
	cout << endl;
	return 0;
}
