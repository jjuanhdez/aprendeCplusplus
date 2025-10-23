//################################################################################
// Implementar una funci�n que reciba una cadena y muestre por pantalla un 
// mapa/diccionario con el conteo de ocurrencias de cada vocal (a, e, i, o, u).
//
// Escribe esta funci�n como una funci�n pura, sin modificar variables externas, 
// s�lo tomando la cadena de entrada y devolviendo el resultado.
//################################################################################


#include <iostream>
#include <string>
#include <map>
#include <cctype>
using namespace std;

map<char, int> contarVocales(const string& texto) {
    map<char, int> contador;
    for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador[c]++;
        }
    }
    return contador;
}

int main() {
    string texto = "Hola mundo, aprendiendo programaci�n funcional en C++";
    auto resultado = contarVocales(texto);
    cout << "Conteo de vocales:\n";
    for (auto& par : resultado) {
        cout << par.first << " : " << par.second << endl;
    }
    return 0;
}
