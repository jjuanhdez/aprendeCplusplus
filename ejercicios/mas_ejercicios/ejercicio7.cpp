//################################################################################
//Programa que permita adivinar a la computadora un determinado n�mero entero y 
//positivo para lo cual se deben leer los l�mites en los que est� comprendido dicho 
//n�mero.
//################################################################################						

#include <iostream>
using namespace std;

int devolverNumero(int liminf, int limsup);
char leerOpcion(int num, int &liminf, int &limsup);

int main(int argc, char *argv[]) {
	int limite_inferior, limite_superior, minumero;
	char opcion;
	int intentos = 0;

	cout << "Piensa un n�mero..." << endl;
	//Se pide el primer intervalo
	cout << "Necesito saber el intervalo donde se encuentra el n�mero." << endl;
	cout << "L�mite inferior: " << endl; 
	cin >> limite_inferior;
	cout << "L�mite superior: " << endl; 
	cin >> limite_superior;
	//Se va repitiendo hasta que se acierte el n�mero
	do {
		//Escribimos el n�mero propuesto (qu� sera el n�mero intermedio del intervalo)
		minumero = devolverNumero(limite_inferior, limite_superior);
		cout << "�Has pensando en el n�mero? " << minumero << endl;
		//Incrementamos el n�mero de intentos
		intentos += 1;
		//Leemos la opci�n, si no ha acertado se modifica algunos de los l�mites y se vuelve a proponer un nuevo n�mero
		opcion = leerOpcion(minumero, limite_inferior, limite_superior);
	} while(toupper(opcion) != 'S');
	//Se escribe los intentos que ha necesitado para acertarlo
	cout << "Lo he acertado en " << intentos << " intentos.";
}


//################################################################################
//Funci�n "devolverNumero": Recibe un intervalo (l�mite inferior y superior) y 
//devuelve el n�mero intermedio Como posible n�mero que tiene que acertar.
//Par�metro de entrada: L�mite inferior y superior del intervalo.
//Dato devuelto: N�mero intermedio del intervalo.
//################################################################################

int devolverNumero(int liminf, int limsup) {
	return (liminf+limsup) / 2;
}


//################################################################################
//Funci�n "leerOpcion": Recibe un intervalo (l�mite inferior y superior) y el n�mero 
//que ha propuesto Como soluci�n y devuelve la opci�n escogida:
// 'S', si es correcto.
// 'A', si es m�s alto que el n�mero a adivinar.
// 'B', si es m�s bajo. Al finalizar el programa, se deber� escribir el n�mero de 
//intentos realizados para acertar el n�mero.
//Si la opci�n es A, se modifica el l�mite inferior con el n�mero propuesto.
//Si la opci�n es B, se modifica el l�mite superior con el n�mero propuesto.
//Par�metro de entrada: N�mero propuesto
//Par�metro de entrada y salida: L�mite inferior y superior del intervalo.
//Dato devuelto: Opci�n escogida
//################################################################################

char leerOpcion(int num, int &liminf, int &limsup) {
	char opcion;
	do
	{
		cout << "�Es correcto?"  << endl;
		cout << "S: si es correcto."  << endl;
		cout << "A: si es m�s alto que el n�mero a adivinar." << endl;
		cout << "B: si es m�s bajo." << endl;
		cin >> opcion;
	}
	while(toupper(opcion) != 'S' && toupper(opcion) != 'A' && toupper(opcion) != 'B');
	if(toupper(opcion) != 'A')
		liminf = num;
	if(toupper(opcion) != 'B')
		limsup = num;
	return opcion;
}
