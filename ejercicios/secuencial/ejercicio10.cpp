//################################################################################
//Un alumno desea saber cu�l ser� su calificaci�n final en la materia de Algoritmos
//Dicha calificaci�n se compone de los siguientes porcentajes:
//* 55% del promedio de sus tres calificaciones parciales.
//* 30% de la calificaci�n del examen final.
//* 15% de la calificaci�n de un trabajo final.
//################################################################################
//An�lisis
//Hay que leer las notas parciales, la nota del examen final 
//y la nota del trabajo final. 
//Posteriormente se calculan los porcentajes y se suman.
//Datos de entrada: tres calificaciones parciales, nota examen final, 
//					nota trabajo final (Real).
//Informaci�n de salida: nota final (Real).
//Variables: parcial, parcial2, parcial3, examen, trabajo, nota (Real).
//################################################################################
//Dise�o
//1. Leer las notas parciales, del examen final y del trabajo.
//2. Calculamos la nota 55% de la media de las notas parciales, 
//   m�s el 30% de la nota del examen m�s 15% de la nota del trabajo.
//3. Mostrar nota final
//################################################################################

#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float examen;
	float nota;
	float parcial1, parcial2, parcial3;
	float trabajo;
	cout << "Dime la nota del parcial 1: ";
	cin >> parcial1;
	cout << "Dime la nota del parcial 2: ";
	cin >> parcial2;
	cout << "Dime la nota del parcial 3: ";
	cin >> parcial3;
	cout << "Dime la nota del examen: ";
	cin >> examen;
	cout << "Dime la nota del trabajo: ";
	cin >> trabajo;
	nota = ((parcial1 + parcial2 + parcial3)/3)*0.55 + 0.3*examen + 0.15*trabajo;
	cout << "Nota final: " << nota << endl;
	return 0;
}
