//################################################################################
//Dise�ar el algoritmo correspondiente a un programa, que:
// * Cree una tabla bidimensional de longitud 5x15 y nombre 'marco'.
// * Cargue la tabla con dos �nicos valores 0 y 1, donde el valor uno ocupar� las 
//   posiciones o elementos que delimitan la tabla, es decir, las m�s externas, 
//   mientras que el resto de los elementos contendr�n el valor 0.
// * Muestre el contenido de la tabla en pantalla.
//################################################################################
//An�lisis
//Recorro la tabla: si el indice de fila = 0 (extremo izquierdo)
//o �ndice de fila = n�mero de filas -1 (extremo derecho)
//o �ndice de columnas = 0 (extremo superior)
//o �ndice de columnas = de columnas columnas -1 (extremo inferior)
//inicializo a 1, sino inicializo a 0.
//Recorro la tabla por filas y columnas para mostrar los valores.
//Datos de entrada: Nada
//Informaci�n de salida: Los valores de la tabla
//Variables: matriz (tabla de 5 x 5 enteros), fila, col, num_filas, num_cols (Entero)
//################################################################################

#include <iostream>
using namespace std;

#define FIL 5
#define COL 15
int main(int argc, char *argv[]) {
	int matriz[FIL][COL];
	int fila, col;
	
	//Recorro la tabla
	for(fila = 0; fila < FIL; fila++)
	{
		for(col = 0; col < COL; col++)
		{	
			//Si estoy en el extremo izquierdo, derecho, superior o inferior
			if(fila == 0 || fila == FIL-1 || col == 0 || col == COL-1)
				//Inicializo a 1
				matriz[fila][col] = 1;
			else
				//SiNo inicializo a 0
				matriz[fila][col] = 0;
		}
	}
	//Recorro para mostrar tabla
	for(fila = 0; fila < FIL; fila++)
	{
		for(col = 0; col < COL; col++)
		{	
			cout << matriz[fila][col];
		}
		cout << endl;
	}
	return 0;
}
