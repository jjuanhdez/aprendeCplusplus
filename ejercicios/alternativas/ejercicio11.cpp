//################################################################################
//Programa que lea 3 datos de entrada A, B y C, que corresponden a las 
//dimensiones de los lados de un tri�ngulo. 
//El programa debe determinar qu� tipo de tri�ngulo es, teniendo en cuenta:
//Si se cumple Pit�goras entonces es tri�ngulo rect�ngulo
//Si s�lo dos lados del tri�ngulo son iguales entonces es is�sceles.
//Si los 3 lados son iguales entonces es equil�tero.
//Si no se cumple ninguna de las condiciones anteriores, es escaleno.
//################################################################################
//An�lisis
//Pedir la medida de los tres lados de un tri�ngulo:
//Si se cumple el teorema de pit�goras es un tri�ngulo rect�ngulo
//Adem�s, si tienes dos lados iguales y uno desigual, es is�sceles
//O si tiene todos los lados iguales es equil�tero
//O si son los tres distintos es escaleno.
//Datos de entrada: los tres lados del tri�ngulo (Real)
//Informaci�n de salida: Tipo de rect�ngulo
//Variables: ladoA, ladoB, ladoC (Real)
//################################################################################
//Dise�o
//1. Leer ladoA, ladoB, ladoC
//2. Si se cumple el teorema de pit�goras (tenemos que suponer que cualquier 
//   lado puede ser la hipotenusa) mostrar "Tri�ngulo rect�ngulo"
//3. Si tiene dos lados iguales y uno desigual mostrar "Tri�ngulo Is�sceles"
//4. En otro caso, si tiene los tres lados iguales, mostrar "Tri�ngulo Equil�tero"
//5. En otro caso, mostrar "Tri�ngulo Escaleno"
//################################################################################
//Ejemplos
//(3,4,5) rect�ngulo, escaleno
//(7,7,9.8994949366117) rect�ngulo, is�sceles
//################################################################################

#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float ladoA, ladoB, ladoC;
	cout << "Introduce longitud lado A: ";
	cin >> ladoA;
	cout << "Introduce longitud lado B: ";
	cin >> ladoB;
	cout << "Introduce longitud lado C: ";
	cin >> ladoC;
	
	//Pit�goras
	if(pow(ladoA,2) + pow(ladoB,2) == pow(ladoC,2) || pow(ladoB,2) + pow(ladoB,2) == pow(ladoA,2) || pow(ladoC,2) + pow(ladoA,2) == pow(ladoB,2)) {
		cout << "Tri�ngulo rect�ngulo";
	}
	//Is�sceles
	if((ladoA == ladoB && ladoA != ladoC) || (ladoB == ladoC && ladoB != ladoA) || (ladoC == ladoA && ladoC != ladoB)) {
		cout << "Tri�ngulo is�sceles";
	}
	else {
		//Equil�tero
		if(ladoA == ladoB && ladoA == ladoC) {
			cout << "Tri�ngulo equil�tero";
		}
		else {
			cout << "Tri�ngulo escaleno";
		}
	}
	return 0;
}
