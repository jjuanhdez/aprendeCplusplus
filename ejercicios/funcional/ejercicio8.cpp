//################################################################################
// Crear dos funciones que operen sobre un número. 
// Crear otra función que tome ambas funciones y las combine de forma que se 
// aplique doblar y luego sumarUno al mismo número. 
//
// Uso de la ccomposición de funciones, clave en programación funcional.
//################################################################################


#include <iostream>
#include <functional>
using namespace std;

auto doblar = [](int x) { return x * 2; };
auto sumarUno = [](int x) { return x + 1; };

// Componer dos funciones: aplicar doblar y luego sumarUno
function<int(int)> componer(
		function<int(int)> f1, 
		function<int(int)> f2) {
	//return [=](int x) { return f2(f1(x)); };
	return [f1, f2](int x) { return f2(f1(x)); };
}

int main() {
	auto combinada = componer(doblar, sumarUno);
	int r = combinada(5);
	
	cout << "Resultado de combinar doblar y sumarUno sobre 3: "  << r << "\n"; // (5*2)+1 = 11
		
	return 0;
}
