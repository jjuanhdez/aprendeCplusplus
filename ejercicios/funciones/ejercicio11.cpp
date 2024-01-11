//################################################################################
//Crear un programa principal que al introducir una fecha nos diga el día juliano 
//que corresponde. 
//################################################################################

#include <iostream>
using namespace std;

//Declaración de las funciones
bool esBisiesto(int year);
int diasDelMes(int month, int year);
int calcularDiaJuliano(int day, int month, int year);
void leerFecha(int &day, int &month, int &year);

int main(int argc, char *argv[]) {
	int d, m, a;
	leerFecha(d, m, a);
	cout << "Día Juliano: " << calcularDiaJuliano(d, m, a);
	return 0;
}


//################################################################################
//Función "esBisiesto": Recibe un año y devuelve si es o no bisiesto
//Parámetros de entrada: año
//Dato devuelto: Valor lógico indicando si es bisiesto (Verdadero) o no (Falso)
//################################################################################

bool esBisiesto(int year) {	
	if((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0))
		return true;
	else
		return false;
}


//################################################################################
//Función "diasDelMes": Recibe un mes y un año y devuelve el número de días que 
//tiene ese mes en ese año. Necesita la función esBisiesto
//Parámetros de entrada: mes y año
//Dato devuelto: Días del mes en ese año
//################################################################################

int diasDelMes(int month,int year) {
	int dias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(esBisiesto(year))
		dias[1]++;
	return dias[month-1];
}


//################################################################################
//Función "calcularDiaJuliano": Recibe un día, mes y año y devuelve el día juliano
//correspondiente a esa fecha. El día juliano correspondiente a una fecha es un 
//número entero que indica los días que han transcurrido desde el 1 de enero del 
//año indicado. Depende de la función "diasDelMes"
//Parámetros de entrada: día, mes y año
//Dato devuelto: Día juliano
//################################################################################

int calcularDiaJuliano(int day, int month, int year) {
	int mes;
	int diaj = 0;
	for(mes = 1; mes < month; mes++)
	{
		diaj += diasDelMes(mes, year);
	}
	diaj +=  day;
	return diaj;
}


//################################################################################
//Procedimiento "leerFecha": Lee por teclado el día, mes y el año y lo devuelve
//como parámetro de entrada / salida.
//Parámetros de entrada/salida: día, mes y año
//################################################################################

void leerFecha(int &day, int &month, int &year) {
	cout << "Día: ";
	cin >> day;
	cout << "Mes: ";
	cin >> month;
	cout << "Año: ";
	cin >> year;
}
