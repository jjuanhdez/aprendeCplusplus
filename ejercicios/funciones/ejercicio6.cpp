//################################################################################
//Dise�ar una funci�n que calcule el �rea y el per�metro de una circunferencia. 
//Utiliza dicha funci�n en un programa principal que lea el radio de una 
//circunferencia y muestre su �rea y per�metro.
//################################################################################

#include <iostream>
#include <cmath>
using namespace std;

//Declaraci�n de la funci�n
void CalcularAreaPerimetro(float radio, float &area, float &perimetro);	

int main(int argc, char *argv[]) {
 	float radio, area, perimetro;
	cout << "Introduce el radio: ";
	cin >> radio;
	CalcularAreaPerimetro(radio, area, perimetro);
	cout << "�rea: " << area << endl;
	cout << "Per�metro: " << perimetro << endl;
	return 0;
}


//################################################################################
//Procedimiento "CalcularAreaPerimetro": recibe el radio de una circunferencia y
//devuelve el �rea y el per�metro.
//Par�metros de entrada: radio (Real)
//Par�metros de entrada y salida: �rea y per�metro (Real)
//################################################################################

void CalcularAreaPerimetro(float radio, float &area, float &perimetro) {
	area = M_PI * pow(radio,2);  //M_PI es una constante con el valor de PI definida en cmath
	perimetro = 2 * M_PI * radio;
}
