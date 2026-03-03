#include <iostream>
#include <locale.h>
using namespace std;

void duplicadoParamValor(int numero) 
{
    numero*=2;
}
void duplicadoParamReferencia(int &numero)
{
    numero*=2;
}

int main()
{
    setlocale(LC_ALL, "spanish");
    int numero;
    cout << "Introduzca un número entero: ";
    cin >> numero;
    cout << "El número " << numero << " cambió a ";
    duplicadoParamValor(numero);
    cout << numero << endl;
    cout << "El número " << numero << " cambió a ";
    duplicadoParamReferencia(numero);
    cout << numero << endl;
}