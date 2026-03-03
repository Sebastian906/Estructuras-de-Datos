// Función que recibe un parámetro por valor y devuelve el resultado de multiplicar por dos el número recibido.

#include <iostream>
using namespace std;

int duplicado(int numero)
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
    cout <<"El valor de "<<numero
         << " duplicado "<< " es: "<< resultado << endl;
}