//################################################################################
//Escribir un algoritmo para calcular la nota final de un estudiante, considerando: 
//por cada respuesta correcta 5 puntos, por una incorrecta -1 y por respuestas en 
//blanco 0. Imprimir el resultado obtenido por el estudiante.
//################################################################################
//An�lisis
//Se piden la cantidad de respuestas correctas, incorrectas. Calculamos la nota:
// 5 puntos por respuesta correcta, -1 por incorrecta.
//Datos de entrada: respuesta correctas, incorrectas y en blanco(Entero).
//Informaci�n de salida: puntos (Entero)
//Variables: correctas, incorrectas, puntos (Entero)
//################################################################################
//Dise�o
//1. Leer preguntas correctas, incorrectas y en blanco
//2. Calcular nota: n�mero de correctas * 5 + n�mero de incorrectas * -1
//3. Mostrar puntos
//################################################################################

#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int correctas;
	int incorrectas;
	int puntos;
	cout << "Dime cantidad de respuestas correctas: ";
	cin >> correctas;
	cout << "Dime cantidad de respuestas incorrectas: ";
	cin >> incorrectas;
	puntos = correctas * 5 + incorrectas * (-1);
	cout << "Puntos: " << puntos << endl;
	return 0;
}
