#include <iostream>
#include "Estudiante.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int opcion = 0;
    Estudiante _estudiante;
    do
    {
        system("CLS");
        cout << "\t\t\t\t\t*** Sistema de Estudiantes *** " << endl;
        cout << "\t\t\t\t\t-------------------------------" << endl;
        cout << "\t\t\t\t1. Agregar estudiante" << endl;
        cout << "\t\t\t\t2. Buscar estudiante" << endl;
        cout << "\t\t\t\t3. Editar estudiante" << endl;
        cout << "\t\t\t\t4. Eliminar estudiante" << endl;
        cout << "\t\t\t\t5. Listar estudiantes" << endl;
        cout << "\t\t\t\t6. Salir" << endl;
        cout << "\t\t\t\tDigite una opción : ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            _estudiante.ingresar();
            break;
        case 2:
            _estudiante.buscar();
            break;
        case 3:
            _estudiante.editar();
            break;
        case 4:
            _estudiante.eliminar();
            break;
        case 5:
            _estudiante.mostrar();
            break;
        }
    } while (opcion < 6);
    return 0;
}