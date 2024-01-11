//################################################################################
//Queremos guardar la temperatura m�nima y m�xima de 5 d�as. 
//Realizar un programa que d� la siguiente informaci�n:
// * La temperatura media de cada d�a.
// * Los d�as con menos temperatura.
// * Se lee una temperatura por teclado y se muestran los d�as cuya temperatura 
//m�xima coincide con ella. Si no existe ning�n d�a se muestra un mensaje de 
//informaci�n.
//################################################################################
//An�lisis
//Recorro la tabla leyendo para cada d�a la temperatura m�xima y m�nima.
//Recorro la tabla para mostrar la temperatura media de cada d�a.
//Recorro la tabla para calcular la temperatura m�nima, y vuelvo a recorrer para 
//mostrar los d�as con dicha temperatura.
//Por �ltimo pido una temperatura y recorro la tabla para mostrar el d�a cuya 
//temperatura m�xima es igual a la temperatura indicada, o un mensaje diciendo que 
//no existe d�a con dicha temperatura.
//Datos de entrada: Para los cinco d�as introducimos temperatura m�xima y m�nima.
//Y al final introducimos una temperatura para buscar los d�as con temperatura m�xima.
//Informaci�n de salida: La temperatura media de cada d�a, los d�as con temperatura 
//                       m�nima, los d�as con temperaturas m�xima la indicada por 
//                       teclado o un mensaje informando que no existe d�as con 
//                       dicha temperatura m�xima.
//Variables: temperatura (tabla de 5 x 2 enteros), existe_temperatura (Logico)
//           indice, cant_dias (Entero), temp_max, temp_min (Entero)
//################################################################################

#include <iostream>
using namespace std;

#define FIL 5
#define COL 2
int main(int argc, char *argv[]) {
	float temperatura[FIL][COL];
	bool existe_temperatura;
	int indice;
	int temp_max, temp_min;

	//Recorrido para rellenar la tabla (5 d�as con temp m�nima y m�xima)
	for(indice = 0; indice < FIL; indice++)
	{
		cout << "D�a " << (indice+1) << ". Temperatura m�nima: ";
		cin >> temperatura[indice][0];
		cout << "D�a " << (indice+1) << ". Temperatura m�xima: ";
		cin >> temperatura[indice][1];
	}
	//Mostrar temperatura media
	cout << "Temperaturas medias" << endl;
	cout << "===================" << endl;
	for(indice = 0; indice < FIL; indice++)
		cout << "D�a " << (indice+1) << ". Temperatura media: " << (temperatura[indice][0] + temperatura[indice][1]) / 2 << endl;
	
	//Calcular temperatura m�nima m�s peque�a
	temp_min = temperatura[0][0];
	for(indice = 0; indice < FIL; indice++)
		if(temperatura[indice][0] < temp_min)
			temp_min = temperatura[indice][0];
	//Mostrar los d�as con menos temperatura
	cout << "D�as con menos temperatura" << endl;
	cout << "==========================" << endl;
	for(indice = 0; indice < FIL; indice++)
		if(temperatura[indice][0] == temp_min)
			cout << "D�a " << (indice+1) << endl;
	//D�as con temperatura m�xima
	existe_temperatura = false;
	cout << "D�as con temperatura m�xima" << endl;
	cout << "===========================" << endl;
	cout << "Introduce una temperatura: ";
	cin >> temp_max;
	for(indice = 0; indice < FIL; indice++)
		if(temperatura[indice][1] == temp_max)
		{
			cout << "D�a "<< (indice+1) << endl;
			existe_temperatura = true;
		}
	
	if (!existe_temperatura)
		cout << "No hay ning�n d�a con dicha temperatura." << endl;
	return 0;
}
