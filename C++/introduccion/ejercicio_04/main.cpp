/* Escriba una función en C++ que permita hacer cálculos aritméticos (suma, resta, 
multiplicación, división). La función debe recibir dos parámetros enteros y una variable 
tipo char que represente la operación a realizar (+, -, *, /). Debe retornar el resultado
al main */

#include <iostream>
#include <locale.h>
using namespace std;

int operacion(int numero1, int numero2, char operador) {
    if (operador == '+') return numero1 + numero2;
    else if (operador == '-') return numero1 - numero2;
    else if (operador == '*') return numero1 * numero2;
    else if (operador == '/') return numero1 / numero2;
    else return 0; // Retorna 0 si el operador no es válido
}

int main() {
    setlocale(LC_ALL, "spanish");
    int numero1, numero2;
    char operador;
    cout << "Escriba el valor para el número 1: ";
    cin >> numero1;
    cout << "Escriba el valor para el número 2: ";
    cin >> numero2;
    cout << "Escriba la operación a realizar (+, -, *, /): ";
    cin >> operador;
    int resultado = operacion(numero1, numero2, operador);
    cout << numero1 << " " << operador << " " << numero2 << " = " << resultado << endl;
}