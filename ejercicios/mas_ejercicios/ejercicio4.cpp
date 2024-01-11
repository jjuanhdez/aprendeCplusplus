//################################################################################
//Algoritmo que descomponga un n�mero en sus factores primos.
//################################################################################
//An�lisis
//Vamos hacer un proceso iterativo, por el que se lee un n�mero y se comprueba 
//si es primo.
//Si es primo, se imprime y se termina el algoritmo.
//Si no es primo, se calcula el primer divisor, se muestra 
//y se actuliza el n�mero (numero / divisor) y se va a la siguiente iteraci�n.
//################################################################################

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int num,div;
    bool factorizar, factor_primo;
    cout << "Ingrese el numero: ";
    cin >> num;
    cout << "Factorizacion: " << endl;
    factorizar = true;
	//Mientras se pueda seguir factorizando y el n�mero sea mayor que 1
    while(factorizar && num > 1)
    {
        div = 1; 
		//Supongo que el n�mero es primo, no se puede factorizar
		factor_primo = true;
		//Compruebo si es primo
        while(div <= sqrt(num) && factor_primo)
        {
            div++;
			//Si se puede dividir por un n�mero entre 2 y la ra�z cudadrada del n�mero
            if(num % div == 0)
				//Significa que no es primo
                factor_primo = false;
        }
		//Si el n�mero es primo, lo imprimo y hemos terminado
        if(factor_primo)
        {
            cout << num << endl;
            factorizar = false;
        }
        else //Si no es primo, c�culo el nuevo n�mero (num/div)y muestro el divisor
			 //Y vuelvo a intentar factorizar
        {
            cout << div << endl;
            num = num / div;
            factor_primo = true;
		}
    }
    return 0;
}
