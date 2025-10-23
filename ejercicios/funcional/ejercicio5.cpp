//################################################################################
// Crear un programa que reciba una lista (vector) de n�meros enteros y use 
// std::transform con una funci�n lambda para crear un nuevo vector con el cuadrado
// de cada n�mero y los muestre por pantalla.
// 
// Este ejercicio introduce funciones lambda y programaci�n declarativa donde 
// defines qu� quieres hacer, no c�mo iterar.
//################################################################################


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    vector<int> cuadrados(numeros.size());
    
    transform(numeros.begin(), numeros.end(), cuadrados.begin(),
              [](int x) { return x * x; });
    
    cout << "Cuadrados:";
    for (int c : cuadrados) {
        cout << " " << c;
    }
    cout << endl;
    return 0;
}

