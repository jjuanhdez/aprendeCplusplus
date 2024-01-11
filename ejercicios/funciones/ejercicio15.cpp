//################################################################################
//Realiza un programa principal que nos permita usar funciones para manipular colas.
//################################################################################

#include <iostream>
using namespace std;

//Declaraci�n de las funciones
void inicializarCola(string cola[], int size_cola);
int longitudCola(string cola[], int size_cola);
bool estaVaciaCola(string cola[], int size_cola);
bool estaLlenaCola(string cola[], int size_cola);
void addCola(string cad, string cola[], int size_cola);
string sacarDeLaCola(string cola[], int size_cola);
void escribirCola(string cola[], int size_cola);

int main(int argc, char *argv[]) {
	string micola[10];
	int tam_cola = 10;
	string elem;
	int opcion;
	inicializarCola(micola, tam_cola);
	do
	{
		cout << "1.- A�adir elemento a la cola" << endl;
		cout << "2.- Sacar elemento de la cola" << endl;
		cout << "3.- Longitud de la cola" << endl;
		cout << "4.- Mostrar cola" << endl;
		cout << "5.- Salir" << endl;
		cin >> opcion;
		cin.ignore();
		switch(opcion)
		{
			case 1:
				cout << "Dame la cadena para a�adir a la cola: ";
				getline(cin, elem);
				addCola(elem, micola, tam_cola);
				break;
			case 2:
				cout << sacarDeLaCola(micola, tam_cola) << endl;
				break;
			case 3:
				cout << "Longitud: " << longitudCola(micola, tam_cola) << endl;
				break;
			case 4:
				escribirCola(micola, tam_cola);
				break;
			case 5:
			    break;
			default:
				cout << "Opci�n incorrecta" << endl;
		}
	}	
	while(opcion != 5);
	return 0;
}


//################################################################################
//Procedimiento "inicializarCola": Recibe un vector (cola) y su tama�o. 
//Recorre el vector e inicializa sus elementos a *. 
//El * representa que el elemento est� vac�o.
//Par�metros de entrada: Tama�o del vector
//Par�metros de entrada y salida: El vector (cola)
//################################################################################

void inicializarCola(string cola[], int size_cola) {
	int i;
	for(i = 0; i < size_cola; i++)
		cola[i] = "*";
}


//################################################################################
//Funci�n "longitudCola": Recibe un vector (cola) y su tama�o. 
//Devuelve un contador con los elementos de la cola.
//Recorre el vector mientras no encuentre un * o llegue al final.
//Par�metros de entrada: Tama�o del vector, el vector (cola)
//################################################################################

int longitudCola(string cola[], int size_cola) {
	int size = 0;
	while(size < size_cola && cola[size] != "*")
		size++;
	return size;
}


//################################################################################
//Funci�n EstaVaciaCola: Recibe un vector (cola) y su tama�o. 
//Devuelve un valor l�gico indicando si la cola est� vac�a.
//Est� vac�a si la longitud es 0.
//Par�metros de entrada: Tama�o del vector, el vector (cola)
//################################################################################

bool estaVaciaCola(string cola[], int size_cola)
{
	if(longitudCola(cola, size_cola) == 0)
		return true;
	else
		return false;
}


//################################################################################
//Funci�n "estaLlenaCola": Recibe un vector (cola) y su tama�o. 
//Devuelve un valor l�gico indicando si la cola est� llena.
//Est� llena si la longitud es igual al tama�o del vector.
//Par�metros de entrada: Tama�o del vector, el vector (cola)
//################################################################################

bool estaLlenaCola(string cola[], int size_cola) {
	if(longitudCola(cola, size_cola) == size_cola)
		return true;
	else
		return false;
}


//################################################################################
//Procedimiento "addCola": Recibe un vector (cola), su tama�o y un elemento (cadena)
//Si no esta llena, a�ade el elemento en la siguiente posici�n vac�a, 
//cuyo indice es igual a la Longitud de la cola.
//Si est� llena, escribe un mensaje de error.
//Par�metro de entrada: Tama�o del vector y el elemento.
//Par�metros de entrada y salida: El vector (cola)
//################################################################################

void addCola(string cad, string cola[], int size_cola) {
	if(!estaLlenaCola(cola, size_cola))
		cola[longitudCola(cola, size_cola)] = cad;
	else
		cout << "No se puede a�adir elemento. La cola est� llena" << endl;
}


//################################################################################
//Funci�n "sacarDeLaCola": Recibe un vector (cola), su tama�o y devuelve 
//el elemento que se ha introducido en primer lugar, si no est� vac�a.
//El �ndice de ese elemento ser� el 0. Lo dem�s elementos se desplazan hac�a el 
//primer elemento. Y el �ltimo elemento (el de la posici�n tama�o de la cola - 1)
//se inicializa a *.
//Si est� vac�a, escribe un mensaje de error.
//Par�metro de entrada: Tama�o del vector y el elemento.
//Par�metros de entrada y salida: El vector (cola)
//Dato devuelto: El elemento 
//################################################################################

string sacarDeLaCola(string cola[], int size_cola) {
	string cad;
	int i;
	if(!estaVaciaCola(cola, size_cola))
	{
		cad = cola[0];
		for(i = 0; i < size_cola-1; i++)
			cola[i] = cola[i+1];
		cola[size_cola-1] = "*";
	}
	else
	{
		cout << "No se puede sacar elemento. La cola est� vac�a" << endl;
		cad = "";	
	}
	return cad;
}


//################################################################################
//Funci�n "escribirCola": Recibe un vector (cola) y su tama�o. 
//Muestra los elementos del vector Hasta que llegue al final o se encuentre un *.
//Par�metros de entrada: Tama�o del vector, el vector (cola)
//################################################################################

void escribirCola(string cola[], int size_cola) {
	int i = 0;
	while(i < size_cola && cola[i] != "*")
	{
		cout << cola[i] << " ";
		i++;
	}
	cout << endl;
}
