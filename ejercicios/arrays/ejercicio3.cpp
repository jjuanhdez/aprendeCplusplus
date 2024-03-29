//################################################################################
//Realizar un programa que lea por teclado las 5 notas obtenidas por un alumno 
//(comprendidas entre 0 y 10). Mostrar todas las notas, la nota media, la nota 
//m�s alta y la menor que haya obtenido.
//################################################################################
//An�lisis
//Leo 5 notas (valido que sean >= 0 y <= 10). Guardo las notas en un vector.
//Recorro de nuevo el vector para acumular las notas, calcular la nota m�xima 
//y la nota m�nima. Finalmente calculo la media y muestro los valores.
//Datos de entrada: 5 notas.
//Informaci�n de salida: Las notas, la nota media, nota m�xima y nota m�nima.
//Variables: notas(vector de 10 enteros), tam_notas,indice (Entero)
//           nota_media (Real), suma, nota_max, nota_min (Entero)
//################################################################################

#include <iostream>
using namespace std;

#define TAM 5
int main(int argc, char *argv[]) {
	int notas[TAM];
	float nota_media;
	int suma, nota_max, nota_min;
	int indice;
	
	for(indice = 0; indice < TAM; indice++)
	{
		//Valido que sea un n�mero >=0 y <=10.
		do
		{
			cout << "Introduce la nota " << indice+1 << ": ";
			cin >> notas[indice];
		}
		while(notas[indice] < 0 || notas[indice] > 10);
	}
	//Supongo que la nota m�xima y la m�nima es ta primera
	nota_max = notas[0];
	nota_min = notas[0];
	
	suma = 0;
	for(indice = 0; indice < TAM; indice++)
	{
		//Acumulo la nota para calcular la media.
		suma += notas[indice];
		//Actualizo la nota m�xima si encuentro una m�s grande
		if(notas[indice] > nota_max)
			nota_max = notas[indice];
			
		//Actualizo la nota m�nima si encuentro una m�s peque�a
		if(notas[indice] < nota_min)
			nota_min = notas[indice];
	}
	//Calculo la media, teniendo en cuenta el tama�o del vector.
	nota_media = float(suma) / TAM;
	//Muestro resultados
	cout << endl;
	cout << "Notas: ";
	for(indice = 0; indice < TAM; indice++)
		cout << notas[indice] << " ";
	
	cout << endl;
	cout << "Nota media: " << nota_media << endl;
	cout << "Nota m�xima: " << nota_max << endl;
	cout << "Nota m�nima: " << nota_min << endl;
	return 0;
}
