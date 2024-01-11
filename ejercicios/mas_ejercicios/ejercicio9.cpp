//################################################################################
//Programar el juego "Mastermind", para ello el programa debe "eligir" un n�mero 
//de cuatro cifras (sin cifras repetidas), que ser� el c�digo que el jugador debe
//adivinar en la menor cantidad de intentos posibles. Cada intento consiste en una
//propuesta de un c�digo que escribe el jugador, y una respuesta del programa. 
//Las respuestas le dar�n pistas al jugador para que pueda deducir el c�digo:
// * n�mero de "MUERTOS": cantidad de d�gitos que est�n en el n�mero secreto y en 
//   la misma posici�n,
// * n�mero de "HERIDOS": cantidad de d�gitos que est�n en el n�mero secreto pero
//   no en la misma posici�n.
//################################################################################

#include <iostream>
#include <cmath>
using namespace std;

void leerSecuencia(int vector[]);
bool estaRepetido(int num, int vector[]);
void generarSecuencia(int vector[]);
void comprobarSecuencia(int secreto[], int usuario[], int &m, int &h);

int main(int argc, char *argv[]) {
	int indice, intentos;
	string numero;
	string resultados[100];
	int secreto[4], usuario[4];
	int muertos, heridos;
	
	//Se genera el n�mero secreto a adivinar
	generarSecuencia(secreto);
	//Se repeti hasta que se acierte, n�mero de muertos = 4
	intentos = 0;
	do {
		//Leemos la secuencia propuesta por el usuario
		leerSecuencia(usuario);
		muertos = 0;
		heridos = 0;
		//Se comprueba la propuesta
		comprobarSecuencia(secreto, usuario, muertos, heridos);
		//Voy a guardar el numero, con el resultado
		numero = "";
		for(indice = 0; indice < 4; indice++)
			numero = numero + to_string(usuario[indice]);
		//Y se imprimen los muertos y heridos
		resultados[intentos] = numero + " - MUERTOS: " + to_string(muertos) + " - HERIDOS: " + to_string(heridos);
		//Muestro los resultados
		//Borrar Pantalla
		for(indice = 0; indice < 40; indice++)
		{
			cout << "" << endl;
		}
		intentos++;
		for(indice = intentos; indice > 0; indice--)
			cout << resultados[indice-1] << endl;
	}
	while(muertos != 4);
}


//################################################################################
//Funci�n "estaRepetido": Recibe un n�mero y un vector de cuatro n�meros y comprueba
//si el n�mero no est� en el vector.
//Par�metro de entrada: N�mero y vector
//Dato devuelto: Valor l�gico: Verdadero si el n�mero est� en el vector y falso si no.
//################################################################################

bool estaRepetido(int num,int vector[]) {
	int indice;
	for(indice = 0; indice < 4; indice++)
	{
		if(num == vector[indice])
			return true;
	}
	return false;
}


//################################################################################
//Procedimiento generarSecuencia: Recibe un vector que se inicializa con 4 enteros 
//no repetidos
//Par�metro de entrada y salida: Vector de 4 enteros
//################################################################################

void generarSecuencia(int vector[]) {
	int indice;
	int num;
	//Se incializa el vector para que se pueda comprobar si tiene alg�n n�mero repetido
	for(indice = 0; indice < 4; indice++)
		vector[indice] = -1;
	
	//Se inicializa cada elemento con un n�mero
	for(indice = 0; indice < 4; indice++)
	{
		//Se comprueba que no tenga n�mero repetidos
		do {
			num = rand() % 10;
		}
		while(estaRepetido(num, vector));
		vector[indice] = num;
	}
}


//################################################################################
//Procedimiento "leerSecuencia": Recibe un vector que se inicializa con 4 enteros 
//le�dos por teclado por el usuario, asegurando de que no se introduce ninguno 
//repetido.
//Par�metro de entrada y salida: Vector de 4 enteros
//################################################################################

void leerSecuencia(int vector[]) {
	int indice, num;
	bool repetido;
	//Se inicializa el vector para que se pueda comprobar si tiene alg�n n�mero repetido
	for(indice = 0; indice < 4; indice++)
		vector[indice] = -1;
	
	//Se inicializa cada elemento con un n�mero le�do por teclado
	for(indice = 0; indice < 4; indice++)
	{
		do { //Se comprueba que el n�mero le�do no se haya repetido
			cout <<  "N�mero " << indice+1 << ": ";
			cin >> num;
			repetido = estaRepetido(num, vector);
			if(repetido)
				cout << "No debes indicar n�meros repetidos." << endl;
		}
		while(repetido);
		vector[indice] = num;
	}
}


//################################################################################
//Procedimiento "comprobarSecuencia": Recibe dos vectores, el secreto y el 
//introducido por el usuario y devuelve el n�mero de coincidencias en la misma 
//posici�n (muertos) y las coincidencias en distintas posici�n (heridos).
//Par�metros de entrada: Dos vectores
//Par�metro de entrada y salida: muertos y heridos
//################################################################################

void comprobarSecuencia(int secreto[], int usuario[], int &m, int &h) {
	int indice_secreto, indice_usuario;
	//recorro los dos vectores
	for(indice_secreto = 0; indice_secreto < 4; indice_secreto++)
	{
		for(indice_usuario = 0; indice_usuario < 4; indice_usuario++)
		{
			if(secreto[indice_secreto] == usuario[indice_usuario])
			{
				//Si el elemento coincide y adem�s est�n en la misma posici�n, incremento los muertos.
				if(indice_secreto == indice_usuario)
					m++;
				else
					//Si el elemento coincide pero no est�n en la misma posici�n, incremento los heridos.
					h++;
			}
		}
	}
}
