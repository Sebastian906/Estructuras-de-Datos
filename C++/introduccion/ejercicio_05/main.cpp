/* 
Escriba una función C++ que permita capturar dos números enteros, los envíe 
a una función y que invierta sus valores. Utilice parámetros por referencia.
*/

#include <iostream>
#include <locale.h>
using namespace std;

void operacion(int &numero1, int &numero2) {
    int temp = numero2;
    numero2 = numero1;
    numero1 = temp;
}

int main() {
    setlocale(LC_ALL, "spanish");
    int numero1;
    int numero2;
    cout << "Escriba el valor para número 1: ";
    cin >> numero1;
    cout << "Escribe el valor para número 2: ";
    cin >> numero2;
    cout << "Antes de la función" << endl;
    cout << "Número 1: " << numero1 << " - " << "Número 2: " << numero2 << endl;
    cout << "Después de la función" << endl;
    operacion(numero1, numero2);
    cout << "Número 1: " << numero1 << " - " << "Número 2: " << numero2 << endl;
}