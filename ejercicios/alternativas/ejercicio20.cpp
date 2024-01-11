//################################################################################
//Una compa��a de transporte internacional tiene servicio en algunos pa�ses de 
//Am�rica del Norte, Am�rica Central, Am�rica del Sur, Europa y Asia.
//El costo por el servicio de transporte se basa en el peso del paquete 
//y la zona a la que va dirigido...
//################################################################################
//An�lisis
//El costo por el servicio de transporte se basa en el peso del paquete (gramos) 
//y la zona a la que va dirigido. 
//Paquetes de m�s de 5 kg no se transportan.
//Datos de entrada: peso en gramos (Entero), zona (Entero) del 1 al 5
//Informaci�n de salida: Precio del transporte (Real)
//Variables: coste (Entero), zona (Entero)
//################################################################################
//Dise�o
//1. Leer peso
//2. Si no es correcto > 0 y < 5000 mostrar mensaje de error
//3. Si es correcto:
//4. Leer zona
//5. Seg�n el valor de la zona calculo el coste del transporte.
//6. Mostrar el coste de transporte.
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int peso, zona;
	cout << "�Qu� peso tiene el paquete (en gramos)?: ";
	cin >> peso;
	if(peso > 0 && peso <= 5000) {
		cout << "1.- Am�rica del Norte\n";
		cout << "2.- Am�rica Central\n";
		cout << "3.- Am�rica del Sur\n";
		cout << "4.- Europa\n";
		cout << "5.- Asia\n";
		cout << "A que zona se reparte (1-5): ";
		cin >> zona;
		switch(zona)
		{
			case 1:
				cout << "Coste: " << peso*24 << " euros.";
				break;
			case 2:
				cout << "Coste: " << peso*20 << " euros.";
				break;
			case 3:
				cout << "Coste: " << peso*21 << " euros.";
				break;
			case 4:
				cout << "Coste: " << peso*10 << " euros.";
				break;
			case 5:
				cout << "Coste: " << peso*18 << " euros.";
				break;
			default:
				cout << "Zona incorrecta.";
		}
	}
	else
	{
		cout << "Peso incorrecto (no podemos transportar paquetes de m�s de 5Kg).";
	}
	return 0;
}
