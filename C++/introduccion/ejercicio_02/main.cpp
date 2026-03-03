// Función que recibe un parámetro por referencia y lo duplica, y otra función que recibe un parámetro por valor y lo duplica. En el programa principal se muestra el resultado de ambas funciones.

#include <iostream>
using namespace std;

int duplicado(int &numero)
{
    numero*=2;
    return numero;
}

int main()
{
    int numero;
    cout << "Introduzca un número real: ";
    cin >> numero;
    int resultado = duplicado(numero);
    cout << "Ahora número vale " << resultado << endl;
}