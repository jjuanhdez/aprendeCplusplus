//################################################################################
//Realiza un programa principal que nos permita usar funciones para manipular pilas.
//################################################################################

#include <iostream>
using namespace std;

//Declaración de las funciones
void inicializarPila(string pila[], int size_pila);
int longitudPila(string pila[], int size_pila);
bool estaVaciaPila(string pila[], int size_pila);
bool estaLlenaPila(string pila[], int size_pila);
void addPila(string cad, string pila[], int size_pila);
string sacarDeLaPila(string pila[], int size_pila);
void escribirPila(string pila[], int size_pila);

int main(int argc, char *argv[]) {
	string mipila[10];
	int tam_pila = 10;
	string elem;
	int opcion;
	inicializarPila(mipila, tam_pila);
	do
	{
		cout << "1.- Añadir elemento a la pila" << endl;
		cout << "2.- Sacar elemento de la pila" << endl;
		cout << "3.- Longitud de la pila" << endl;
		cout << "4.- Mostrar pila" << endl;
		cout << "5.- Salir" << endl;
		cin >> opcion;
		cin.ignore();
		switch(opcion)
		{
			case 1:
				cout << "Dame la cadena para añadir a la pila: ";
				getline(cin,elem);
				addPila(elem, mipila, tam_pila);
				break;
			case 2:
				cout << sacarDeLaPila(mipila, tam_pila) << endl;
				break;
			case 3:
				cout << "Longitud: " << longitudPila(mipila, tam_pila) << endl;
				break;
			case 4:
				escribirPila(mipila, tam_pila);
				break;
			case 5:
			    break;
			default:
				cout << "Opción incorrecta" << endl;
		}
	}	
	while(opcion != 5);
	return 0;
}


//################################################################################
//Procedimiento "inicializarPila": Recibe un vector (pila) y su tamaño. 
//Recorre el vector e inicializa sus elementos a *. 
//El * representa que el elemento está vacío.
//Parámetros de entrada: Tamaño del vector
//Parámetros de entrada y salida: El vector (pila)
//################################################################################

void inicializarPila(string pila[], int size_pila) {
	int i;
	for(i = 0; i < size_pila; i++)
		pila[i] = "*";
}


//################################################################################
//Función "longitudPila": Recibe un vector (pila) y su tamaño. 
//Devuelve un contador con los elementos de la pila.
//Recorre el vector mientras no encuentre un * o llegue al final.
//Parámetros de entrada: Tamaño del vector, el vector (pila)
//################################################################################

int longitudPila(string pila[], int size_pila) {
	int size = 0;
	while(size < size_pila && pila[size] != "*")
		size++;
	return size;
}


//################################################################################
//Función "estaVaciaPila": Recibe un vector (pila) y su tamaño. 
//Devuelve un valor lógico indicando si la pila está vacía.
//Está vacía si la longitud es 0.
//Parámetros de entrada: Tamaño del vector, el vector (pila)
//################################################################################

bool estaVaciaPila(string pila[], int size_pila) {
	if(longitudPila(pila, size_pila) == 0)
		return true;
	else
		return false;
}


//################################################################################
//Función "estaLlenaPila": Recibe un vector (pila) y su tamaño. 
//Devuelve un valor lógico indicando si la pila está llena.
//Está llena si la longitud es igual al tamaño del vector.
//Parámetros de entrada: Tamaño del vector, el vector (pila)
//################################################################################

bool estaLlenaPila(string pila[], int size_pila) {
	if(longitudPila(pila, size_pila) == size_pila)
		return true;
	else
		return false;
}


//################################################################################
//Procedimiento "addPila": Recibe un vector (pila), su tamaño y un elemento (cadena)
//Si no está llena, añade el elemento en la siguiente posición vacía,
//cuyo indice es igual a la Longitud de la pila.
//Si está llena, escribe un mensaje de error.
//Parámetro de entrada: Tamaño del vector y el elemento.
//Parámetros de entrada y salida: El vector (pila)
//################################################################################

void addPila(string cad, string pila[], int size_pila) {
	if(!estaLlenaPila(pila, size_pila))
		pila[longitudPila(pila, size_pila)] = cad;
	else
		cout << "No se puede añadir elemento. La pila está llena" << endl;
}


//################################################################################
//Función "sacarDeLaPila": Recibe un vector (pila), su tamaño y devuelve 
//el elemento que se ha introducido en último lugar, si no está vacía.
//El índice de ese elemento será la longitud de la pila - 1
//El elemento en esa posición se vacía, es decir se inicializa a *.
//Si está vacía, escribe un mensaje de error.
//Parámetro de entrada: Tamaño del vector y el elemento.
//Parámetros de entrada y salida: El vector (pila)
//Dato devuelto: El elemento 
//################################################################################

string sacarDeLaPila(string pila[], int size_pila) {
	string cad;
	if(!estaVaciaPila(pila, size_pila))
	{
		cad = pila[longitudPila(pila, size_pila)-1];
		pila[longitudPila(pila, size_pila)-1] = "*";
	}
	else
	{
		cout << "No se puede sacar elemento. La pila está vacia" << endl;
		cad = "";	
	}
	return cad;
}


//################################################################################
//Función "escribirPila": Recibe un vector (pila) y su tamaño. 
//Muestra los elementos del vector hasta que llegue al final o se encuentre un *.
//Parámetros de entrada: Tamaño del vector, el vector (pila)
//################################################################################

void escribirPila(string pila[], int size_pila) {
	int i = 0;
	while(i < size_pila && pila[i] != "*")
	{
		cout << pila[i] << " ";
		i++;
	}
	cout << endl;
}
