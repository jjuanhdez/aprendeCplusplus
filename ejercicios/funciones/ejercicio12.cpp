//################################################################################
//Crear un programa principal que al introducir una fecha nos diga el d�a juliano 
//que corresponde. 
//################################################################################

#include <iostream>
using namespace std;

//Declaraci�n de las funciones
bool esBisiesto(int year);
int diasDelMes(int month, int year);
int calcularDiaJuliano(int day, int month, int year);
void leerFecha(int &day, int &month, int &year);
bool validarFecha(int day, int month, int year);

int main(int argc, char *argv[]) {
	int d, m, a;
	leerFecha(d, m, a);
	cout << "D�a Juliano: " << calcularDiaJuliano(d, m, a);
	return 0;
}


//################################################################################
//Funci�n "esBisiesto": Recibe un a�o y devuelve si es o no bisiesto
//Par�metros de entrada: a�o
//Dato devuelto: Valor l�gico indicando si es bisiesto (Verdadero) o no (Falso)
//################################################################################

bool esBisiesto(int year) {	
	if((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0))
		return true;
	else
		return false;
}


//################################################################################
//Funci�n "diasDelMes": Recibe un mes y un a�o y devuelve el n�mero de d�as que 
//tiene ese mes en ese a�o. Necesita la funci�n esBisiesto
//Par�metros de entrada: mes y a�o
//Dato devuelto: D�as del mes en ese a�o
//################################################################################

int diasDelMes(int month,int year) {
	int dias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(esBisiesto(year))
		dias[1]++;
	return dias[month-1];
}


//################################################################################
//Funci�n "calcularDiaJuliano": Recibe un d�a, mes y a�o y devuelve el d�a juliano
//correspondiente a esa fecha. El d�a juliano correspondiente a una fecha es un 
//n�mero entero que indica los d�as que han transcurrido desde el 1 de enero del 
//a�o indicado. Depende de la funci�n "diasDelMes"
//Par�metros de entrada: d�a, mes y a�o
//Dato devuelto: D�a juliano
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
//Procedimiento "leerFecha": Lee por teclado el d�a, mes y el a�o y lo devuelve
//como par�metro de entrada / salida.
//Par�metros de entrada/salida: d�a, mes y a�o
//################################################################################

void leerFecha(int &day, int &month, int &year) {
	bool fechavalida;
	do
	{
		cout << "D�a: ";
		cin >> day;
		cout << "Mes: ";
		cin >> month;
		cout << "A�o: ";
		cin >> year;
		fechavalida = validarFecha(day, month, year);
		if(!fechavalida)
			cout << "Fecha no v�lida" << endl;
	} while(!fechavalida);	
}

//################################################################################
//Funci�n validarFecha: Recibe un d�a, mes y a�o correspondiente a una fecha y 
//devuelve si la fecha es correcta o no.
//Simplemente miramos si el d�a indicado es mayor que 1 y menor que los d�as del mes
//Si introducimos un mes incorrecto, la funci�n DiasDelMes devuelve 0 por lo tanto
//la fecha va a ser incorrecta.
//Par�metros de entrada: d�a, mes y a�o
//Dato devuelto: Valor l�gico indicando si es correcta (Verdadero) o no (Falso)
//################################################################################

bool validarFecha(int day, int month, int year) {
	if(day < 1 || day > diasDelMes(month, year))
		return false;
	else
		return true;
}
