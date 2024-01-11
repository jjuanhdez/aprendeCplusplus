//################################################################################
//Programa que pida un mes y un a�o (superior a 1900) y muestre el calendario del mes 
//################################################################################

#include <iostream>
using namespace std;

bool esBisiesto(int year);
int diasDelMes(int month, int year);
int calcularDiaJuliano(int day, int month, int year);
int diasDesde1900(int day, int month, int year);
string devolverNombreMes(int month);
void calendario(int month, int year);

int main(int argc, char *argv[]) {
	int month, year;
	do {
		cout << "Mes: ";
		cin >> month;
	}
	while(month < 1 || month > 12);
	cout << "A�o: ";
	cin >> year;
	calendario(month, year);
}


//################################################################################
//Funci�n "esBisiesto": Recibe un a�o y devuelve si es o no bisiesto
//Par�metros de entrada: a�o
//Dato devuelto: Valor l�gico indicando si es bisiesto (Verdadero) o no (Falso)
//################################################################################

bool esBisiesto(int year) {	
	if(year % 4 == 0 &&  !(year % 100 == 0) || year % 400 == 0)
		return true;
	else
		return false;
}


//################################################################################
//Funci�n "diasDelMes": Recibe un mes y un a�o y devuelve el n�mero de d�as que 
//tiene ese mes en ese a�o. Necesita la funci�n "esBisiesto"
//Par�metros de entrada: mes y a�o
//Dato devuelto: D�as del mes en ese a�o
//################################################################################

int diasDelMes(int month, int year) {
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
	diaj += day;
	return diaj;
}


//################################################################################
//Funci�n "diasDesde1900": Recibe un d�a, mes y a�o y devuelve los d�as  
//transcurridos desde 1900. Por cada a�o se acumula 365 o 366 d�as, 
//y del �ltimo a�o se acumula el d�a juliano
//Par�metros de entrada: d�a, mes y a�o
//Dato devuelto: D�as desde 1900
//################################################################################

int diasDesde1900(int day, int month, int year) {
	int dias = 0, i;
	for(i = 1900; i < year; i++)
	{
		if(esBisiesto(i))
			dias = dias + 366;
		else
			dias += 365;
	}
	return dias + calcularDiaJuliano(day, month, year);
}


//################################################################################
//Funci�n "devolverNombreMes": Recibe un mes y devuelve el nombre del mes indicado.
//Par�metros de entrada: mes
//Dato devuelto: Nombre del mes
//################################################################################

string devolverNombreMes(int month) {
	string meses[12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	return meses[month-1];
}


//################################################################################
//Procedimiento "calendario": Recibe un mes y un a�o e imprime el calendario de ese
//mes .Necesitamos calcular los d�as del mes, los d�as desde 1900 al 1 del mes y a�o 
//indicados, y una vez calculado le hacemos el m�dulo 7 y el n�mero obtenido ser� 
//el d�a de la semana (0: domingo, 1: lunes, ...) (Tenemos que transformarlo para 
//que el 0 sea lunes.
//Escribimos espacios para desplazar el d�a 1 a la posici�n correspondiente, 
//desde el d�a 1 Hasta el �ltimo d�a del mes, vamos colocando los dem�s d�as
//teniendo en cuanta que cada 7 d�as colocados tenemos que hacer un salto de l�nea.
//Par�metros de entrada:  mes y a�o
//################################################################################

void calendario(int month, int year) {
	int dias_mes, dia1, indice;
	//Calculamos los d�as del mes y a�o indicados.
	dias_mes = diasDelMes(month, year);
	//Claculamos los d�as transcurridos desde 1/1/1900 al 1 del mes a�o indicados.
	dia1 = diasDesde1900(1, month, year);
	//Calculamos el resto de la divisi�n entre 7 (0: domingo, 1: lunes, ...)
	dia1 = dia1 % 7;
	//Lo transformo para que el lunes sea el de la posici�n 0 y el domingo el 6
	dia1 -= 1;
	if(dia1 == -1)
		dia1 = 6;

	//Mostramos el nombre del mes y el a�o
	cout << "" << endl;
	cout << devolverNombreMes(month) << "/" << year << endl;
	cout << "" << endl;
	cout << " L   M   M   J   V   S   D" << endl;
	cout << "==========================" << endl;
	//Escribo espacios hasta el d�a de la semana para desplazar la colocaci�n del primer d�a
	for(indice = 0; indice < dia1; indice++)
		cout << "    ";

	//Desde el primer d�a al �ltimo
	for(indice = 1; indice <= dias_mes; indice++)
	{
		//si estoy escribiendo del 1 al 9 a�ado espacios al principio para que se justifique a la derecha y se vea de forma adecuada
		if(indice < 10)
			cout << " " << indice << "  ";
		else
			cout << indice << "  ";

		//Voy incrementado el d�a de la semana correspondiente al d�a que voy a escribir a continuaci�n
		dia1 = dia1 + 1;
		//Si llego al Domingo (6) hay que realizar un salto de l�nea
		if(dia1 > 6)
		{
			cout << "" << endl;
			dia1 = 0;
		}
	}
	cout << "" << endl;
}
