//################################################################################
//Algoritmo que pida al usuario dos n�meros y muestre su divisi�n si el segundo 
//no es cero, o un mensaje de aviso en caso contrario.
//################################################################################
//An�lisis
//Tenemos que pedir dos n�meros, y mostrar el resultado de la divisi�n. 
//Si el divisor es 0 debemos responder un mensaje de error.
//Datos de entrada: dividendo, divisor (Entero)
//Informaci�n de salida: El resultado de la divisi�n o un mensaje de error 
//indicando que el divisor es igual a 0.
//Variables: dividendo,divisor (Entero)
//################################################################################
//Dise�o
//1. Leer los n�meros
//2. Si el divisor es igual a 0 escribir "No se puede dividir por 0"
//3. En caso contrario mostrar el resultado de la divisi�n
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
   int dividendo, divisor;
   cout << "Dime el n�mero 1: ";
   cin >> dividendo;
   cout << "Dime el n�mero 2: ";
   cin >> divisor;
   if (divisor == 0)
   {
        cout << "No puedes dividir por 0";
   }
   else
   {
       cout << "La divisi�n es " << dividendo / float(divisor);
   }
   return 0;
}
