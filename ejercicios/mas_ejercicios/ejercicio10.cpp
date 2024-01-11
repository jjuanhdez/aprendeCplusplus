//################################################################################
//Escribe un programa para jugar al ahorcado.
//################################################################################

#include <iostream>
using namespace std;

void leerSecreto(string &secreto, bool aciertos[]);
int numeroAciertos(bool aciertos[]);
void escribirSecreto(string secreto, bool aciertos[]);
bool comprobarSecreto(string letra, string secreto, bool aciertos[]);
void leerLetra(string &letra, string &letras);
void mostrarAhorcado(int fallos);

int main(int argc, char *argv[]) {
	string secreto, letras, letra;
	bool aciertos[20];
	int num_fallos, indice;
	
	//Letras: cadena donde se van a ir guardando las letras introducidas
	letras = "";
	num_fallos = 0;
	//Se introduce por teclado la palabra secreta a adivinar
	leerSecreto(secreto, aciertos);
	//Se repite hasta que el número de aciertos sea igual a la longitud de la palabra o el número de fallos sea 6
	do {
		
		//Borrar Pantalla
		for(indice = 0; indice < 40; indice++)
		{
			cout << "" << endl;
		}
		//Se escribe la palabra (* las letras no acertadas)
		escribirSecreto(secreto, aciertos);
		
		//Se muestra el dibujo del ahorcado, se haya acertado o no.
		mostrarAhorcado(num_fallos);
		
		//Se muestran las letras que se han introducido anteriormente
		cout << "Letras introducidas: " << letras << endl;
		
		//Se lee una letra y se actualiza las letras leídas
		leerLetra(letra, letras);
		//Si no hemos acertado la letra mostramos mensaje de error e incrementamos número de fallos.
		if(!comprobarSecreto(letra, secreto, aciertos))
			num_fallos++;
	}
	while(numeroAciertos(aciertos) != secreto.size() && num_fallos != 8);
	//Podemos salir del bucle por dos razones
	//Si el número de fallos es 6 hemos perdido
	
	
	if(num_fallos == 8)
	{
		//Borrar Pantalla
		for(indice = 0; indice < 40; indice++)
		{
			cout << "" << endl;
		}
		escribirSecreto(secreto, aciertos);
		mostrarAhorcado(num_fallos);
		cout << "Has perdido!!!" << endl;
	}
	else //Hemos ganado!!!!
	{
		cout << "Has ganado!!!" << endl;
	}
}


//################################################################################
//Procedimiento "leerSecreto": Inicializamos la palabra secreta (no más de 20 
//caracteres) y el vector de aciertos a Falso.
//Parámetro de entrada y salida: Palabra que hay que adivinar, y aciertos: vector
//de valores lógicos que se inicializan a falso indicando que no se han acertado 
//ninguna letra.
//################################################################################

void leerSecreto(string &secreto, bool aciertos[]) {
	int indice;
	do {
		cout << "Introduce la palabra a adivinar: ";
		getline(cin, secreto);
		if(secreto.size() > 20)
			cout << "No puede tener más de 20 caracteres" << endl;
	}
	while(secreto.size() > 20);
	for(indice = 0; indice < 20; indice++)
		aciertos[indice] = false;
	//Borrar Pantalla
	for(indice = 0; indice < 40; indice++)
	{
		cout << "" << endl;
	}
}


//################################################################################
//Función "numeroAciertos": Recibe el vector de aciertos y devuelve cuantas letras
//se han acertado (valores Verdadero).
//Parámetro de entrada: aciertos: vector de valores lógicos que indica las letras
//que se han acertado.
//Dato devuelto: Número de letras acertadas
//################################################################################

int numeroAciertos(bool aciertos[]) {
	int i, num;
	num = 0;
	for(i = 0; i < 20; i++)
		if(aciertos[i])
			num++;
	return num;
}


//################################################################################
//Procedimiento "escribirSecreto": Recibe la palabra secreta (no más de 20 
//y el vector de aciertos. Y muestra por pantalla un carácter o un * según la 
//posición del carácter indique en el vector aciertos que se ha acertado la letra 
//(valor Verdadero)
//Parámetro de entrada: Palabra que hay que adivinar, y aciertos: vector de valores 
//lógicos que indica las letras que se han acertado.
//################################################################################

void escribirSecreto(string secreto, bool aciertos[]) {
	int i;
	//Recorro la cadena de caracteres
	for(i = 0; i < secreto.size(); i++)
	{
		//Si la posición del vector aciertos igual a la posición de un carácter
		// es verdadero imprimo el carácter
		if(aciertos[i])
			cout << secreto[i];
		else //Sino imprimo un *
			cout << "*";
	}
	cout << "" << endl;
}


//################################################################################
//Función "comprobarSecreto": Recibe un carácter, la cadena a adivinar y el vector 
//de aciertos y devuelve si el carácter está en la cadena. Además si es así cambia
//en el vector aciertos las posiciones donde se encuentra el carácter de Falso a
//Verdadero.
//Parámetro de entrada: un carácter, la cadena y el vector de aciertos
//Dato devuelto: Valor lógico, Verdadero si el carácter está en la cadena, 
//Falso en caso contrario.
//################################################################################

bool comprobarSecreto(string letra, string secreto, bool aciertos[]) {
	bool acierto;
	int i;
	acierto = false;
	for(i = 0; i < secreto.size(); i++)
	{
		if(secreto[i] == letra[0])
		{
			aciertos[i] = true;
			acierto = true;
		}
	}
	cout << "" << endl;
	return acierto;
}


//################################################################################
//Procedimiento "leerLetra": Lee un carácter por teclado y lo devuelve. Además 
//devuelve un cadena con las letras que se han leído anteriormente.
//Parámetro de entrada y salida: la letra leída por teclado, y la cadena con todas 
//las letras leídas anteriormente.
//################################################################################

void leerLetra(string &letra, string &letras) {
	do {
		cout << "Introduce una letra: ";
		getline(cin, letra);
		if(letra.size() != 1)
			cout << "Una sola letra!!!" << endl;
	}
	while(letra.size() != 1);
	letras = letras + letra + " ";
}



//################################################################################
//Procedimiento "mostarAhorcado": Recibe el número de fallos, y según el valor  
//muestra el nivel de "ahorcamiento" que lleva el jugador.
//Parámetro de entrada: Número de fallos
//################################################################################

void mostrarAhorcado(int fallos) {
	cout << "" << endl;
	cout << "La horca!!!" << endl;
	cout << "" << endl;
	switch(fallos)
	{
		case 0:
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			break;
		case 1:
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "_________" << endl;
			break;
		case 2:
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "_________" << endl;
			break;
		case 3:
			cout << "------" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "_________" << endl;
			break;
		case 4:
			cout << "------" << endl;
			cout << "|   |" << endl;
			cout << "|   o" << endl;
			cout << "|  " << endl;
			cout << "|  " << endl;
			cout << "_________" << endl;
			break;
		case 5:
			cout << "------" << endl;
			cout << "|   |" << endl;
			cout << "|   o" << endl;
			cout << "|  /|" << endl;
			cout << "|" << endl;
			cout << "_________" << endl;
			
			break;
		case 6:
			cout << "------" << endl;
			cout << "|   |" << endl;
			cout << "|   o" << endl;
			cout << "|  /|\\" << endl;
			cout << "|" << endl;
			cout << "_________" << endl;
			break;
		case 7:
			cout << "------" << endl;
			cout << "|   |" << endl;
			cout << "|   o" << endl;
			cout << "|  /|\\" << endl;
			cout << "|  / " << endl;
			cout << "_________" << endl;
			break;
		case 8:
			cout << "------" << endl;
			cout << "|   |" << endl;
			cout << "|   o" << endl;
			cout << "|  /|\\" << endl;
			cout << "|  / \\" << endl;
			cout << "_________" << endl;
	}
	cout << "" << endl;
}
