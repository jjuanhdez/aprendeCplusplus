//################################################################################
//Realizar un programa que pregunte aleatoriamente una multiplicaci�n. El programa 
//debe indicar si la respuesta ha sido correcta o no (en caso que la respuesta sea 
//incorrecta el programa debe indicar cu�l es la correcta). El programa preguntar� 
//10 multiplicaciones, y al finalizar mostrar� el n�mero de aciertos.
//################################################################################
//An�lisis
//Hacemos un bucle con 10 iteraciones, en cada iteraci�n se inicializan dos
//n�meros con un valor aleatorio (de 2 a 10). Se calcula la multiplicaci�n.
//Mostramos la multiplicaci�n, y pedimos por teclado el resultado. Si coincide 
//con la multiplicaci�n calculada cuento un acierto, sino escribimos un mensaje
//de error mostrando el resultado correcto. Cuando salimos del bucle mostramos
//el n�mero de aciertos.
//################################################################################

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2, resultado, num_usuario;
	int aciertos, indice;
	aciertos = 0;
	srand(time(NULL));
	//Bucle de 10 iteraciones
	for(indice = 1; indice <= 10; indice++)
	{
		//Genero dos n�meros aleatorios
		num1=rand() % 8 + 2;
		num2=rand() % 8 + 2;
		//Calculo la multiplicaci�n
		resultado = num1 * num2;
		//Mostramos la operaci�n de multiplicar y pedimos al usuario que indique el resultado.
		cout << "Multiplicaci�n " << indice << endl;
		cout << num1 << " * " << num2 << " = ";
		cin >> num_usuario;
		//Si acierta incrementamos el n�mero de aciertos.
		if(num_usuario == resultado)
			aciertos++;
		else
			//Si no acierta muestro la respuesta correcta.
			cout << "No has acertado. La respuesta es " << resultado << endl;
	}
	//Mostramos el n�mero de aciertos
	cout << "Tu nota ha sido: " << aciertos;
	return 0;
}
