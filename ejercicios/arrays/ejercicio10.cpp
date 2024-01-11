//################################################################################
//Dise�ar el algoritmo correspondiente a un programa, que:
// * Cree una tabla bidimensional de longitud 5x5 y nombre 'matriz'.
// * Cargue la tabla con valores num�ricos enteros.
// * Sume todos los elementos de cada fila y todos los elementos de cada columna 
//   visualizando los resultados en pantalla.
//################################################################################
//An�lisis
//Recorro la tabla (con dos para) y voy leyendo los elementos de cada fila y columna.
//Recorro la tabla por filas y columnas y voy acumulando el valor de lo elementos
//de cada columna.
//Recorro la tabla por columnas y filas y voy acumulando el valor de lo elementos
//de cada fila.
//Datos de entrada: Los elementos de la tabla.
//Informaci�n de salida: La suma por cada columna, y la suma por cada fila
//Variables: matriz (tabla de 5 x 5 enteros),
//           fila, col, num_filas, num_cols, suma (Entero)
//################################################################################

#include <iostream>
using namespace std;

#define FIL 5
#define COL 5
int main(int argc, char *argv[]) {
	int matriz[FIL][COL];
	int fila, col;
	int suma;
	for(fila = 0; fila < FIL; fila++)
		for(col = 0; col < COL; col++)
		{
			cout << "Introduce el n�mero de la fila " << fila+1 << " y columna " << col+1 << ": ";
			cin >> matriz[fila][col];
		}
	//Suma las filas
	for(fila = 0; fila < FIL; fila++)
	{
		suma = 0;
		for(col = 0; col < COL; col++)
		{
			suma += matriz[fila][col];
		}
		cout << "La suma de los elemento de la fila " << fila+1 << " es " << suma << endl;
	}
	//Suma las columnas
	for(col = 0; col < COL; col++)
	{
		suma = 0;
		for(fila = 0; fila < FIL; fila++)
		{
			suma += matriz[fila][col];
		}
		cout << "La suma de los elemento de la columna " << col+1 << " es " << suma << endl;
	}
}
