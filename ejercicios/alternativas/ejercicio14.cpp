//################################################################################
//La asociaci�n de vinicultores tiene como pol�tica fijar un precio inicial 
//al kilo de uva, la cual se clasifica en tipos A y B,  y adem�s en tama�os 1 y 2. 
//Cuando se realiza la venta del producto, �sta es de un solo tipo y tama�o. 
//Se requiere determinar cu�nto recibir� un productor por la uva que entrega en un 
//embarque, considerando lo siguiente: 
//Si es de tipo A, se le cargan 20 c�ntimos al precio inicial cuando es 
//de tama�o 1; y 30 c�ntimos si es de tama�o 2. 
//Si es de tipo B, se rebajan 30 c�ntimos cuando es de tama�o 1, y 50 c�ntimos 
//cuando es de tama�o 2. 
//Realice un algoritmo para determinar la ganancia obtenida.
//################################################################################
//An�lisis
//El precio final de la uva se calcula multiplicando los kilos recogidos 
//por el precio de cada kilo. El precio por kilo se calcula a partir de un precio 
//inicial sumando o restando una cantidad determinada seg�n el tama�o 
//y el tipo de la uva.
//Datos de entrada: tipo,tama�o (Caracter), 
//					precio inicial en c�ntimos y kilos (Entero)
//Informaci�n de salida: Precio final en euros (Real) o mensaje de error
//Variables: precio_inicial (Entero), kilos (Entero), tamano (Caracter), 
//			  tipo (Caracter), precio_final (Real)
//################################################################################
//Dise�o
//1.Leer precio_inicial,kilos
//2. Leer tipo
//3. Si tipo no es "A" o "B" devolver mensaje de error.
//4. Leer el tama�o
//5. Si el tama�o no es "1" o "2" devolver mensaje d error.
//6. Si tipo es "A" y tama�o es "1" sumo a precio_inical 20 c�ntimos.
//7. Si tipo es "A" y tama�o es "2" sumo a precio_inical 30 c�ntimos.
//8. Si tipo es "B" y tama�o es "1" resto a precio_inical 20 c�ntimos.
//9. Si tipo es "B" y tama�o es "2" resto a precio_inical 30 c�ntimos.
//10. El precio_final = precio_inicial * kilos
//11. Muestro precio final/100 euros
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char tipo,tamano;
	float precio_inicial, precio_final;
	int kilos;
	cout << "Introduce el precio inicial por kilos de la UVA (centimos): ";
	cin >> precio_inicial;
	cout << "Introduce cuantos kilos has vendido: ";
	cin >> kilos;
	cout << "Introduce el tipo de la UVA (A/B): ";
	cin >> tipo;
	
	if(toupper(tipo) != 'A' && toupper(tipo) != 'B') {
		cout << "Tipo incorrecto";
	}
	else {
		cout << "Introduce el tama�o de la UVA (1/2): ";
		cin >> tamano;
		if(tamano != '1' && tamano != '2') {
			cout << "Tama�o incorrecto";
		}
		else {
			if(toupper(tipo) == 'A') {
				if(tamano == '1') {
					precio_inicial = precio_inicial + 20;
				}
				else {
					precio_inicial = precio_inicial + 30;
				}
			}
			else {
				if(tamano == '1') {
					precio_inicial = precio_inicial - 20;
				}
				else {
					precio_inicial = precio_inicial - 30;
				}
			}
			precio_final = precio_inicial * kilos;
			cout << "La ganancia es " << precio_final/100 << " euros.";
		}
	}
	return 0;
}
