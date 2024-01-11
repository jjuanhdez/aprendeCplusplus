//################################################################################
//Algoritmo que pida n�meros hasta que se introduzca un cero. 
//Debe imprimir la suma y la media de todos los n�meros introducidos.
//################################################################################
//An�lisis
//Vamos pidiendo n�meros hasta introducir un 0.
//Necesitamos un acumulador para ir realizando las sumas intermedias.
//Adem�s necesitamos un contador, para calcular la media (suma/cantidad)
//Datos de entrada: n�meros, un acumulador para sumar y un contador
//Informaci�n de salida: La suma y la media
//Variables: num, suma, cont (Entero)
//################################################################################
//Dise�o
//1. Incializo: suma = 0, cont = 0
//2. Leer num
//3. Mientras num <> 0
//4.   Acumulo: suma = suma + num
//5.   Cuento si num <> 0: cont = cont +1
//6.   Leer num
//7. Si cont = 0 (No hemos introducido ning�n n�mero) -> media = 0
//8. SiNo -> media = suma/cont;
//9. Mostrar suma y media
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string car;
	do {
		cout << "Introduce un car�cter: ";
		getline(cin,car);
	}
	while(car.size() != 1);
	while(car != " ") {
		if (toupper(car[0]) == 'A' || toupper(car[0]) == 'E' || toupper(car[0]) == 'I' || toupper(car[0])=='O' || toupper(car[0]) == 'U')
		{
			cout << "VOCAL" << endl;
		}
		else
		{
			cout << "NO VOCAL" << endl;
		}
		do {
			cout << "Introduce un car�cter: ";
			getline(cin,car);
		}
		while(car.size() != 1);
		
	}
	return 0;
}
