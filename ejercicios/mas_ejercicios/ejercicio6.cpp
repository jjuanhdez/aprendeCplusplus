//################################################################################
//Crear un programa que convierta un n�mero entero (mayor que 1 y menor o igual 
//que 1000) a n�mero romano.
//################################################################################
//An�lisis
//Inicializamos 3 vectores de 10 elementos, con los n�meros romanos correspondientes 
//a las unidades, decenas y centenas.
//Calculamos el n�mero de centenas que tiene el n�mero, y mostramos el n�mero romano
//Calculamos el n�mero de decenas que tiene el n�mero, y mostramos el n�mero romano
//Calculamos el n�mero de unidades que tiene el n�mero, y mostramos el n�mero romano
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	int centenas, decenas, unidades;
	//Inicializamos 3 vectores de 10 elementos, con los n�meros romanos correspondientes 
	//a las unidades, decenas y centenas.
	string nu[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
	string nd[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	string nc[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	// leer el n�mero
	do
	{
		cout << "Ingrese un n�mero entre 1 y 1000: ";
		cin >> num;
	}
	while(num <= 0 || num > 1000);
	//Si el numero es 1000 mostramos el n�mero romano M
	if(num == 1000)
		cout << "M" << endl;
	else
	{
		//Calculamos las centenas,decenas y unidades.
		centenas = (num/100);
		decenas = (num/10) % 10;
		unidades = num % 10;
		//Mostramos los n�meros romanos correspondientes.
		cout << nc[centenas] << nd[decenas] << nu[unidades] << endl;
	}
	return 0;
}
