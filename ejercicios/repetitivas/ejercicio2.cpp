//################################################################################
//Crea una aplicaci�n que permita adivinar un n�mero. La aplicaci�n genera un 
//n�mero aleatorio del 1 al 100. A continuaci�n va pidiendo n�meros y va 
//respondiendo si el n�mero a adivinar es mayor o menor que el introducido,
//adem�s de los intentos que te quedan (tienes 10 intentos para acertarlo). 
//El programa termina cuando se acierta el n�mero (adem�s te dice en cuantos 
//intentos lo has acertado), si se llega al limite de intentos te muestra el 
//n�mero que hab�a generado.
//################################################################################
//An�lisis
//Tenemos que generar un n�mero aleatorio (funci�n Aleatorio) del 1 al 100.
//Necesitamos un contador para contar los 10 intentos. 
//Al principio vale 10 e ir� decrementando.
//Mientras no acierte el n�mero y me queden intentos:
// Leo un n�mero
// Lo comparo con el n�mero generado (digo si es mayor o menor)
// Pido otro numero
//Puedo terminar el bucle por dos razones: 
// si he adivinado el numero (he ganado) y muestro los intentos que he necesitado.
// sino he perdido, he utilizado los 10 intentos y muestro el n�mero generado.
//Datos de entrada: n�mero pedido al usuario.
//Informaci�n de salida: Has ganado y los intentos, o has perdido y el n�mero. 
//Variables: num_screto, num_ingresado, intentos (Entero)
//################################################################################
//Dise�o
// 1. Genero un numero aleatorio del 1 al 100 (num_secreto)
// 2. intentos = 10
// 3. Leer num
// 4. Mientras num <> num_secreto y intentos > 1
// 5. Si num_screto>num -> Escribir "Muy bajo"
// 6. Si num_screto<num -> Escribir "Muy alto"
// 7. intentos = intentos -1
// 8. Escribir intentos
// 9. Leer num
//10. Si num_secreo = num -> Escribir "Has ganado", intentos
//11. SiNo -> Escribir "Has perdido, num_secreto
//################################################################################

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
    int intentos, num_secreto, num_ingresado;
	srand(time(NULL));
    intentos = 10;
    num_secreto  =  rand() % 100 + 1;
    cout << "Adivine el numero (de 1 a 100): ";
    cin >> num_ingresado;
    while (num_secreto != num_ingresado && intentos > 1) {
        if(num_secreto > num_ingresado) {
            cout << "Muy bajo" << endl;
        }
        else
        {
            cout << "Muy alto" << endl;
        }
        intentos = intentos - 1;
        cout << "Le quedan " << intentos << " intentos: ";
        cin >> num_ingresado;
    }
    
    if(num_secreto == num_ingresado) {
        cout << "Exacto! Usted lo adivino en " << 11-intentos << " intentos.";
    }
    else
    {
        cout << "El numero era: " << num_secreto;
    }
	return 0;
}
