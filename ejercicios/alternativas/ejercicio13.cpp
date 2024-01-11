//################################################################################
//Escribe un programa que pida una fecha (d�a, mes y a�o) y diga si es correcta.
//################################################################################
//An�lisis
//Pedir un d�a,mes y a�o y comprobar si corresponde a una fecha correcta.
//Para que una fecha sea correcta:
//* El d�a debe ser mayor que 1 y menor que los d�as que tiene el mes indicado.
//* Los d�as del mes de febrero depender�n de si el a�o es bisiesto o no.
//* El mes indicado debe ser mayor o igual que 1 y menor o igual a 12.
//Datos de entrada: una fecha: d�a,mes y a�o (Entero)
//Informaci�n de salida: Si la fecha es correcta o no.
//Variables: dia, mes, year (Entero), 
//	         dias_del_mes (Entero) donde guardamos los d�as que tiene el mes indicado.
//################################################################################
//Dise�o
//1. Leer dia,mes,year
//2. Si el mes es 1, 3, 5, 7, 8, 10, 12 los dias_del_mes = 31
//3. Si el mes es 4, 6, 9, 11 los dias_del_mes = 30
//4. Si el mes es 2: si el a�o es bisiesto, los dias_del_mes = 29 
//   sino los dias_del_mes = 28
//5. Si hemos introducido otro n�mero de mes, mostrar "Fecha incorrecta"
//6. Si el dia < 0 o > dias_del_mes mostrar "Fecha incorrecta"
//7. En otro caso, mostrar "Fecha correcta"
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dia, mes, year;
	int dias_del_mes;
	cout << "Introduce el dia: ";
	cin >> dia;
	cout << "Introduce el mes: ";
	cin >> mes;
	cout << "Introduce el a�o: ";
	cin >> year;
	switch(mes)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			dias_del_mes = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			dias_del_mes = 30;
			break;
		case 2:
			if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0) {
				dias_del_mes  =  29;
			}
			else
			{
				dias_del_mes  =  28;
			}
			break;
		default:
				dias_del_mes = 0;
				cout << "Fecha incorrecta. Mes incorrecto.\n" ;
	}
	if(dias_del_mes > 0)
	{
		if(dia < 0 || dia > dias_del_mes) {
			cout << "Fecha incorrecta D�a incorrecto.";
		}
		else
		{
			cout << "Fecha correcta";
		}
	}
	return 0;
}
