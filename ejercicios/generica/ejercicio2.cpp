//################################################################################
// Crear una clase plantilla llamada Contenedor que almacene un solo valor de 
// cualquier tipo y proporcione métodos para establecer y obtener ese valor.
// 
// Objetivo: Practicar la creación de clases genéricas y métodos asociados.
//################################################################################


#include <iostream>
using namespace std;

template<typename T>
	class Contenedor {
	private:
		T valor;
	public:
		void setValor(T v) { valor = v; }
		T getValor() { return valor; }
};

int main() {
	Contenedor<int> c1;
	c1.setValor(10);
	cout << "Valor int: " << c1.getValor() << endl;
	
	Contenedor<string> c2;
	c2.setValor("Hola");
	cout << "Valor string: " << c2.getValor() << endl;
	
	return 0;
}
