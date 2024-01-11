//################################################################################
//Programa que lea 3 datos de entrada A, B y C, que corresponden a las 
//dimensiones de los lados de un triángulo. 
//El programa debe determinar qué tipo de triángulo es, teniendo en cuenta:
//Si se cumple Pitágoras entonces es triángulo rectángulo
//Si sólo dos lados del triángulo son iguales entonces es isósceles.
//Si los 3 lados son iguales entonces es equilátero.
//Si no se cumple ninguna de las condiciones anteriores, es escaleno.
//################################################################################
//Análisis
//Pedir la medida de los tres lados de un triángulo:
//Si se cumple el teorema de pitágoras es un triángulo rectángulo
//Además, si tienes dos lados iguales y uno desigual, es isósceles
//O si tiene todos los lados iguales es equilátero
//O si son los tres distintos es escaleno.
//Datos de entrada: los tres lados del triángulo (Real)
//Información de salida: Tipo de rectángulo
//Variables: ladoA, ladoB, ladoC (Real)
//################################################################################
//Diseño
//1. Leer ladoA, ladoB, ladoC
//2. Si se cumple el teorema de pitágoras (tenemos que suponer que cualquier 
//   lado puede ser la hipotenusa) mostrar "Triángulo rectángulo"
//3. Si tiene dos lados iguales y uno desigual mostrar "Triángulo Isósceles"
//4. En otro caso, si tiene los tres lados iguales, mostrar "Triángulo Equilátero"
//5. En otro caso, mostrar "Triángulo Escaleno"
//################################################################################
//Ejemplos
//(3,4,5) rectángulo, escaleno
//(7,7,9.8994949366117) rectángulo, isósceles
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
	
	//Pitágoras
	if(pow(ladoA,2) + pow(ladoB,2) == pow(ladoC,2) || pow(ladoB,2) + pow(ladoB,2) == pow(ladoA,2) || pow(ladoC,2) + pow(ladoA,2) == pow(ladoB,2)) {
		cout << "Triángulo rectángulo";
	}
	//Isósceles
	if((ladoA == ladoB && ladoA != ladoC) || (ladoB == ladoC && ladoB != ladoA) || (ladoC == ladoA && ladoC != ladoB)) {
		cout << "Triángulo isósceles";
	}
	else {
		//Equilátero
		if(ladoA == ladoB && ladoA == ladoC) {
			cout << "Triángulo equilátero";
		}
		else {
			cout << "Triángulo escaleno";
		}
	}
	return 0;
}
