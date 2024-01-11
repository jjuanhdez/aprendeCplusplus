//################################################################################
//Realizar un ejemplo de men�, donde podemos escoger las distintas opciones hasta 
//que seleccionamos la opci�n de "Salir".
//################################################################################
//An�lisis
//La realizaci�n del men� la hacemos con un bucle Repetir y una alternativa Segun
//En el bucle se realiza las siguientes acciones:
// * Mostrar el men� con las distintas opciones
// * Leer opci�n
// * Seg�n opci�n ejecutamos las instrucciones necesarias.
// * En otro caso (opci�n incorrecta): Mostramos opci�n incorrecta
//La opci�n de "Salir" la podemos dejar vac�a (no ejecutar ninguna instrucci�n).
//Se repite el bucle hasta que elijamos la opci�n de "Salir".
//Datos de entrada: opci�n
//Informaci�n de salida: Seg�n la opci�n escogida
//Variables: opcion (Entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int opcion;
    do {
        // mostrar menu
        cout << "Men� de recomendaciones" << endl;
        cout << "   1. Literatura" << endl;
        cout << "   2. Cine" << endl;
        cout << "   3. M�sica" << endl;
        cout << "   4. Videojuegos" << endl;
        cout << "   5. Salir" << endl;
        // ingresar una opcion
        cout << "Elija una opci�n (1-5): " << endl;
        cin >> opcion;
        // procesar esa opci�n
        switch(opcion)
        {
            case 1:
                cout << "Lecturas recomendables:" << endl;
                cout << " + Esper�ndolo a Tito y otros cuentos de f�bol (Eduardo Sacheri)" << endl;
                cout << " + El juego de Ender (Orson Scott Card)" << endl;
                cout << " + El sue�o de los h�roes (Adolfo Bioy Casares)" << endl;
                break;
            case 2:
                cout << "Pel�culas recomendables:" << endl;
                cout << " + Matrix (1999)" << endl;
                cout << " + El �ltimo samuray (2003)" << endl;
                cout << " + Cars (2006)" << endl;
                break;
            case 3:
                cout << "Discos recomendables:" << endl;
                cout << " + Despedazado por mil partes (La Renga, 1996)" << endl;
                cout << " + B�falo (La Mississippi, 2008)" << endl;
                cout << " + Gaia (M�go de Oz, 2003)" << endl;
                break;
            case 4:
                cout << "Videojuegos cl�sicos recomendables" << endl;
                cout << " + D�a del tent�culo (LucasArts, 1993)" << endl;
                cout << " + Terminal Velocity (Terminal Reality/3D Realms, 1995)" << endl;
                cout << " + Death Rally (Remedy/Apogee, 1996)" << endl;
                break;
            case 5:
                cout << "Gracias, vuelva prontos" << endl;
                break;
            default:
                cout << "Opci�n no v�lida" << endl;
        }
	}
    while(opcion != 5);
    return 0;
}
