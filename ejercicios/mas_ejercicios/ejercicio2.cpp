//################################################################################
//Realiza un programa principal que lea un DNI y valide si es correcto (debe 
//comprobar tambi�n que tiene 9 caracteres).
//################################################################################

#include <iostream>
using namespace std;

char CalcularLetra(int num);
bool ValidarDNI(string dni);

int main(int argc, char *argv[]) {
	string midni;
	cout << "DNI: ";
	getline(cin, midni);
	//Mienstras el dni sea inv�lido o su longitud no sea de 9 caracteres, vuelvo a pedirlo.
	while(!ValidarDNI(midni) || midni.size() != 9)
	{
		cout << "Error en el DNI" << endl;
		cout << "DNI: ";
		getline(cin, midni);
	}
	cout << "DNI correcto" << endl;
}


//################################################################################
//Funci�n "ValidarDNI": Recibe un DNI cadena de caracteres (n�meros y letra), 
//devuelve si el DNI es valido o no. Para saber si el v�lido se utiliza la funci�n 
//CalcularLetra con el n�mero del DNI y se comprueba si la letra calculada coincide
//con la letra del DNI.
//Par�metros de entrada: DNI
//Dato devuelto: Valor l�gico Verdadero si el DNI es v�lido o Falso en caso contrario.
//################################################################################

bool ValidarDNI(string dni)
{
	int num;
	char letra;
	letra = dni[8];
	num = stoi(dni.erase(8,1));  //stoi convierte un string a entero
	return toupper(letra) == CalcularLetra(num);
}


//################################################################################
//Funci�n "CalcularLetra": Recibe un n�mero de DNI, devuelve la letra correspondiente.
//Para calcular la letra se divide el n�mero entre 23 y el resto indica la posici�n
//de una lista de letras que hemos guardado en una cadena.
//Par�metros de entrada: N�mero del DNI
//Dato devuelto: La letra calculada
//################################################################################

char CalcularLetra(int num) {
	string letras = "TRWAGMYFPDXBNJZSQVHLCKE";
	return letras[num % 23];
}
