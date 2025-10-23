//################################################################################
// Escribir una función que tome una operación (función) y un número 
// y aplique esa operación al conjunto de números.
// Función que recibe una función como argumento.
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
