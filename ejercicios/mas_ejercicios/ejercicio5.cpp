//################################################################################
//Crea un programa principal que permita convertir de decimal a binario y de 
//binario a decimal.
//################################################################################

#include <iostream>
using namespace std;

string ConvertirABinario(int decimal);
int ConvertirADecimal(string binario);
bool esBinario(string binario);

int main(int argc, char *argv[]) {
	int decimal;
	string binario;
	cout << "Dime un n�mero decimal: ";
	cin >> decimal;
	cin.ignore();
	cout << "N�mero binario: " << ConvertirABinario(decimal) << endl;
	do
	{
		cout << "Dime un n�mero en binario: ";
		getline(cin, binario);
	}
	while(!esBinario(binario));
	cout << "N�mero decimal: " << ConvertirADecimal(binario) << endl;
	return 0;
}


//################################################################################
//Funci�n "ConvertirABinario": Recibe un n�mero entero y devuelve una cadena de
//caracteres con la representaci�n binaria del n�mero.
//Par�metros de entrada: N�mero entero a convertir
//Dato devuelto: Cadena de caracteres con el n�mero binario
//################################################################################

string ConvertirABinario(int decimal) {
	string binario = "";
	//Realizo divisiones sucesivas entre 2 guardando el resto (1 o 0)
	while(decimal > 1)
	{
		//Concatenamos en orden inverso los restos de la divisi�n entre 2.
		binario = to_string(decimal % 2) + binario;
		decimal = decimal / 2;
	}
	binario = to_string(decimal) + binario;
	return binario;
}


//################################################################################
//Funci�n "ConvertirADecimal": Recibe una cadena de caracteres con la representaci�n
// de un n�mero binario y devuelve el entero correspondiente.
//Par�metros de entrada: Cadena de caracteres con el n�mero binario
//Dato devuelto: Entero
//################################################################################

int ConvertirADecimal(string binario) {
	int decimal, posicion, exponente;
	decimal = 0;
	exponente = 1;
	//Voy acumulando el valor de la cifra binario elevado a un exponente que depende de su posici�n.
	//La �ltima cifra hay que elevar al exponete 1, la siguiente 2, la siguiente 4, y as� sucesivamente.
	for(posicion = binario.size()-1; posicion >= 0; posicion--)
	{
		if(binario[posicion] == '1')
			decimal += exponente;
		
		//El exponente se va doblando en cada iteraci�n
		exponente = exponente * 2;
	}
	return decimal;
}


//################################################################################
//Funci�n "esBinario": Recibe una cadena de caracteres con la representaci�n
// de un n�mero binario y devuelve un valor l�gico indicando si realmente es un
//n�mero binario (Tienes 1 y 0) verdadero, y falso en caso contrario.
//Par�metros de entrada: Cadena de caracteres con el n�mero binario
//Dato devuelto: Valor l�gico
//################################################################################

bool esBinario(string binario) {	
	int i;
	for(i = 0; i < binario.size(); i++)
	{
		if(binario[i] != '1' && binario[i] != '0')
			return false;
	}
	return true;
}
