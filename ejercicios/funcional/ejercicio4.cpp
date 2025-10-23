//################################################################################
// Crear una función recursiva que calcule el factorial de un número entero positivo.
// Implementar un programa principal donde se lee ese número y se muestre el 
// resultado del factorial.
//
// La recursividad es uno de los pilares de la programación funcional.
// Pista: La función debe llamarse a sí misma para reducir el problema hasta el 
// caso base, que es factorial(0) = 1.
//################################################################################


#include <iostream>
using namespace std;

unsigned long long CalcularFactorial (unsigned long long n) {
    if (n <= 1)
        return 1;
    else
        return n * CalcularFactorial (n - 1);
}

int main() {
    unsigned long long numero; // = 5;
    
    cout << "Número: ";
    cin >> numero;
    cout << "El factorial de " << numero << " es " << CalcularFactorial (numero) << endl;
    
    return 0;
}

