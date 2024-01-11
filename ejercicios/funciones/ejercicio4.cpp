//################################################################################
//Crea un funci�n "ConvertirEspaciado", que reciba como par�metro un texto y 
//devuelva una cadena con un espacio adicional tras cada letra. Por ejemplo, 
//"Hola, t�" devolver� "H o l a , t � ". Crea un programa principal donde se 
//use dicha funci�n.
//################################################################################

#include <iostream>
using namespace std;
//Declaraci�n de la funci�n
string ConvertirEspaciado(string cad);	

int main(int argc, char *argv[]) {
	string mensaje;
	cout << "Introduce una cadena: ";
	getline(cin, mensaje);
	cout << "La cadena con espacio: " << ConvertirEspaciado(mensaje);
	return 0;
}


//################################################################################
//Funci�n "ConvetirEspaciado": Recibe una cadena de caracteres, y devuelve otra 
//con los mismos caracteres separados con espacio.
//Par�metros de entrada: Cadena de caracteres
//Dato devuelto: Cadena igual a la anterior pero con espacios entre los 
//               caracteres
//################################################################################

string ConvertirEspaciado(string cad) {
	string cad_con_espacios = "";
	int i;
	for(i = 0; i < cad.size(); i++)
	{
		//Concateno el car�cter
		cad_con_espacios += cad[i];
		//Concateno un espacio
		cad_con_espacios += " ";
	}
	return cad_con_espacios;
}
