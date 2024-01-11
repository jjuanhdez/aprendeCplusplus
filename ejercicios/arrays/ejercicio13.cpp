//################################################################################
//De una empresa de transporte se quiere guardar el nombre de los conductores que 
//tiene, y los kil�metros que conducen cada d�a de la semana.
//Para guardar esta informaci�n se van a utilizar dos arreglos:
// * Nombre: Vector para guardar los nombres de los conductores.
// * kms: Tabla para guardar los kil�metros que realizan cada d�a de la semana.
//Se quiere generar un nuevo vector ("total_kms") con los kil�metros totales que 
//realza cada conductor.
//Mostrar la lista con los nombres de conductores y los kil�metros que han realizado.
//################################################################################
//An�lisis
//Leo el n�mero de conductores. N�mero de datos que voy a guardar en los arrays
//El n�mero indicado debe ser menor que el m�ximo tama�o de los arrays
//Recorro los vectores Hasta el n�mero de conductores indicados (lo guardo en un 
//vector), leyendo el nombre  y los kms por d�as (lo guardo en una tabla).
//Recorro la tabla acumulando los kil�metros realizados en la �ltima columna de 
//la tabla.
//Finalmente vuelvo a recorrer para mostrar los nombres y los km acumulados.
//Datos de entrada: El n�mero de conductores, sus nombres y kms realizados por d�a
//Informaci�n de salida: Los nombres de los conductores y el total de kms realizados
//Variables: kms (tabla de 10 x 8 enteros), nombre (vector de 10 cadenas)
//           indice_cond, indice_dias, num_conductores, tam_conductores_max (Entero)
//################################################################################

#include <iostream>
using namespace std;

#define TAM 10
#define COL 8
int main(int argc, char *argv[]) {
	string nombre[TAM];
	//8 columnas, las sietes primeras para guardar los km diarios, y la �ltima para guardar los km acumulados
	int kms[TAM][COL];
	int num_conductores,indice_cond,indice_dias;
	string dias[7] = {"Lunes","Martes","Mi�rcoles","Jueves","Viernes","S�bado","Domingo"};
	//Leo el n�mero de conductores. N�mero de datos que voy a guardar en los arrays
	do
	{
		cout << "�Cu�ntos conductores tiene la empresa? ";
		cin >> num_conductores;
		cin.ignore();
		//El n�mero indicado debe ser menor que el m�ximo tama�o de los arrays
		if(num_conductores>TAM)
			cout << "C�mo m�ximo puedo guardar la informaci�n de " << TAM << endl;
	 } while(num_conductores > TAM);
	//Recorro los vectores hasta el n�mero de conductores indicados
	for(indice_cond = 0; indice_cond < num_conductores; indice_cond++)
	{
		cout << "Nombre del conductor " << indice_cond+1 << ": ";
		//Leo el nombre
		getline(cin, nombre[indice_cond]);
		//Leo los km realizados para cada d�a
		for(indice_dias = 0; indice_dias < 7; indice_dias++)
		{
			cout << "�Cu�ntos km ha realizado el " << dias[indice_dias] << "? ";
			cin >> kms[indice_cond][indice_dias];
			cin.ignore();
		}
	}
	//Recorro los vectores hasta el n�mero de conductores indicados
	for(indice_cond = 0; indice_cond < num_conductores; indice_cond++)
	{
		//Inicializo el acumulador por conductor
		kms[indice_cond][7] = 0;
		//Acumulo los kms por d�a y lo guardo en un vector
		for(indice_dias = 0; indice_dias < 7; indice_dias++)
			kms[indice_cond][7] += kms[indice_cond][indice_dias];
	}
	//Recorro los vectores hasta el n�mero de conductores indicados para mostrar la informaci�n de salida
	for(indice_cond = 0; indice_cond < num_conductores; indice_cond++)
	{
		cout << nombre[indice_cond] << " ha realizado " << kms[indice_cond][7] << " kms." << endl;
	}
	return 0;
}
