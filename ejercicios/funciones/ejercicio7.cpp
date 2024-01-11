//################################################################################
//Crear una subrutina llamada "Login" que reciba un nombre de usuario y una 
//contrase�a y devuelva Verdadero si el nombre de usuario es "usuario1" y la 
//contrase�a es "asdasd". Adem�s anota el n�mero de intentos que se ha intentado 
//hacer login y si no se ha podido hacer login incremente este valor.
//Crear un programa principal donde se pida un nombre de usuario y una contrase�a 
//y se intente hacer login, solamente tenemos tres oportunidades para intentarlo.
//################################################################################

#include <iostream>
using namespace std;

//Declaraci�n de la funci�n
bool esLogin(string nombre, string pass, int &intentos);	

int main(int argc, char *argv[]) {
	string usuario, clave;
	int cuantasveces;
	bool entrar;
	cuantasveces = 0;
	do
	{
		cout << "Usuario: ";
		getline(cin, usuario);
		cout << "Password: ";
		getline(cin, clave);
		//Llamo a la funci�n y le env�o el nombre y la contrase�a
		//Devuelve verdadero o falso seg�n haya indicado bien los datos
		//Adem�s incrementa la variable "cuantasveces" que es un contador de intentos
		entrar = esLogin(usuario, clave, cuantasveces);
		if(!entrar)
			cout << "Error. Nombre de usuario o contrase�a incorrecta." << endl;
	} while(!entrar && cuantasveces<3); //Sale si he hecho login o llego a los tres intentos
	//Puedo llegar a esta instrucci�n por dos razones
	//Si he hecho login muestro mensaje de bienvenida
	if(entrar)
		cout << "Bienvenidos al sistema" << endl;
	else //He llegado a los tres intentos
		cout << "No has entrado en el sistema" << endl;
	return 0;
}


//################################################################################
//Funci�n "esLogin": Recibe un nombre de usuario y una contrase�a, y devuelve un
//valor l�gico: verdadero si se ha introducido el nombre y la contrase�a adecuadas.
//Adem�s va incrementando el numero de intenots que recibe como par�metro de 
//entrada/salida
//Par�metros de entrada: nombre y contrase�a
//Par�metros de entrada y salida: intentos
//Dato devuelto: Valor l�gico indicando si ha hecho login
//################################################################################

bool esLogin(string nombre, string pass, int &intentos) {
	intentos++;
	if(nombre == "usuario1" && pass == "asdasd")
		return true;
	else
		return false;
}
