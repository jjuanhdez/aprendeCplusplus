//################################################################################
//Algoritmo que pida el limite inferior y superior de un intervalo. 
//Si el l�mite inferior es mayor que el superior lo tiene que volver a pedir.
//A continuaci�n, se introducen n�meros hasta que introduzcamos el 0. 
//Cuando termine el programa dar� las siguientes informaciones:
//    * La suma de los n�meros que est�n dentro del intervalo (intervalo abierto).
//    * Cuantos n�meros est�n fuera del intervalo.
//    * Informa si hemos introducido alg�n n�mero igual a los l�mites del intervalo.
//################################################################################
//An�lisis
//Pedimos un intervalo (l�mite inferior y superior)
//Nos tenemos que asegurar que el l�mite inferior sea menor que el superior.
//Se van pidiendo n�meros hasta que se introduzca el 0.
//Si el numero pertenece al intervalo -> lo voy sumando (necesito un acumulador)
//Si el n�mero no pertenece al intervalo, lo cuento (necesito un contador)
//Si el n�mero es igual a alg�n l�mite, lo �ndico (necesito un indicador)
//Al final muestro la suma de los n�meros que pertenecen al intervalo.
//Muestro el contador de n�mero que no pertenecen al intervalo.
//Indico si hemos introducido un n�mero igual a alg�n l�mite
//Datos de entrada: l�mite superior e inferior del intervalo y n�meros.
//Informaci�n de salida: La suma de los que pertenecen al intervalo,
//                       el contador de los n�meros que no pertenecen al intervalo
//                       indico si un n�mero ha sido igual a alg�n intervalo
//Variables: lim_inf, lim_sup, num, suma_dentro_intervalo, cont_fuera_intervalo (Entero)
//           igual_limites (Logico)
//################################################################################
//Dise�o
// 1. Inicializo el acumulador, el contador y el indicado
// 2. Repetir -> ller lim_inf y lim_sup hasta que lim_inf < lim_sup
// 3. Leer num
// 4. Mientras num sea distinto de 0
// 5.   Si num pertenece al intervalo -> acumula la suma
// 6.   Sino -> incremento contador
// 7.   Si es igual a alg�n intervalo -> Lo indico (indicador a Verdadero)
// 8.   Leer num
// 9. Muestro la suma de los n�meros pertenecientes al intervalo
//10. Muestro el contador de n�meros no pertenecientes al intervalo
//11. Si el indicador = Verdadero -> Muestro "Un n�mero = a intervalo"
//12. SiNo -> Muestro "No has introducido un n�mero igual al intervalo
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int lim_inf, lim_sup;
	int num;
	int suma_dentro_intervalo;
	int cont_fuera_intervalo;
	bool igual_limites = false;
	
	//Me aseguro que el lim_inf es menor que el lim_sup
	do {
		cout << "Introduce el l�mite inferior del intervalo: ";
		cin >> lim_inf;
		cout << "Introduce el l�mite superior del intervalo: ";
		cin >> lim_sup;
		if(lim_inf > lim_sup)
			cout << "ERROR: El l�mite inferior debe ser menor que el superior.";
	}	
	while(lim_inf > lim_sup);
	
	cout <<  "Introduce un n�mero (0, para salir): ";
	cin >> num;
	while(num != 0)
	{
		//Pertenece al intervalo
		if(num > lim_inf && num < lim_sup)
			suma_dentro_intervalo = suma_dentro_intervalo + num;
		else
			//No pertenece al intervalo
			cont_fuera_intervalo++;
		//N�mero igual a alguno de los l�mites
		if(num == lim_inf || num == lim_sup)
			igual_limites = true;
		cout <<  "Introduce un n�mero (0, para salir): ";
		cin >> num;
	}
	cout << "La suma de los n�mero dentro del intervalo es " << suma_dentro_intervalo << endl;
	cout << "La cantidad de n�meros fuera del intervalo es " << cont_fuera_intervalo << endl;
	if(igual_limites)
		cout << "Se ha introducido alg�n n�mero igual a los l�mites del intervalo.";
	else
		cout << "No se ha introducido ning�n n�mero igual a los l�mites del intervalo.";
	return 0;
}
