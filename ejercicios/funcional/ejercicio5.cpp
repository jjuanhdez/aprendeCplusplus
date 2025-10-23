//################################################################################
// Crear un programa que reciba una lista (vector) de números enteros y use 
// std::transform con una función lambda para crear un nuevo vector con el cuadrado
// de cada número y los muestre por pantalla.
// 
// Este ejercicio introduce funciones lambda y programación declarativa donde 
// defines qué quieres hacer, no cómo iterar.
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

