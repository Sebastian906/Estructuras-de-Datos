#pragma once
#include <iostream>
#include <vector>
#include "Persona.h"
using namespace std;
class Estudiante : public Persona
{
private:
    string carrera;

public:
    vector<Estudiante> lista;
    Estudiante() {};
    Estudiante(int _carnet, string _nombre, string _apellidos, string _carrera)
        : Persona(_carnet, _nombre, _apellidos)
    {
        carrera = _carrera;
    };

    string getCarrera() { return carrera; }
    void setCarrera(string _carrera) { carrera = _carrera; }

    void buscar()
    {
        system("CLS");
        int carnet;
        cout << "Digite el carnet del estudiante a buscar : ";
        cin >> carnet;
        for (size_t i = 0; i < lista.size(); i++)
        {
            if (lista[i].getCarnet() == carnet)
            {
                cout << "Nombre del estudiante : "
                     << lista[i].getNombre() << " " << lista[i].getApellidos() << endl;
                cout << "Carrera que cursa : " << lista[i].getCarrera();
            }
        }
        cout << endl;
        system("PAUSE");
    }

    void editar()
    {
        system("CLS");
        int carnet;
        char nuevoNombre[30];
        char nuevosApellidos[40];
        char nuevaCarrera[30];
        bool enc = false;
        cout << "Digite el carnet del estudiante a editar : ";
        cin >> carnet;
        cin.ignore();
        for (size_t i = 0; i < lista.size(); i++)
        {
            if (lista[i].getCarnet() == carnet)
            {
                cout << "Datos actuales del estudiante : " << endl;
                cout << "Nombre del estudiante : "
                     << lista[i].getNombre() << " " << lista[i].getApellidos() << endl;
                cout << "Carrera que cursa : "
                     << lista[i].getCarrera() << endl;
                cout << "Digite el nuevo nombre del estudiante : ";
                cin.getline(nuevoNombre, 30);
                cout << "Digite los nuevos apellidos del estudiante : ";
                cin.getline(nuevosApellidos, 40);
                cout << "Digite la nueva carrera del estudiante : ";
                cin.getline(nuevaCarrera, 30);
                lista[i].setNombre(nuevoNombre);
                lista[i].setApellidos(nuevosApellidos);
                lista[i].setCarrera(nuevaCarrera);
                enc = true;
            }
        }
        if (enc == false)
        {
            cout << "El carnet " << carnet << " no fue encontrado en la lista." << endl;
        }
        cout << endl;
        system("PAUSE");
    }

    void eliminar()
    {
        system("CLS");
        int carnet;
        char resp = 'N';
        bool enc = false;
        cout << "Digite el carnet del estudiante a eliminar : ";
        cin >> carnet;
        for (size_t i = 0; i < lista.size(); i++)
        {
            if (lista[i].getCarnet() == carnet)
            {
                cout << "Datos actuales del estudiante : " << endl;
                cout << "Nombre del estudiante : "
                     << lista[i].getNombre() << " " << lista[i].getApellidos() << endl;
                cout << "Carrera que cursa : "
                     << lista[i].getCarrera() << endl;
                cout << "¿Desea eliminar este estudiante? (S/N) : " << endl;
                cin >> resp;
                if (toupper(resp) == 'S')
                {
                    lista.erase(lista.begin() + i);
                }
                enc = true;
            }
        }
        if (enc == false)
        {
            cout << "El carnet " << carnet << " no fue encontrado en la lista." << endl;
        }
        cout << endl;
        system("PAUSE");
    }

    void ingresar()
    {
        system("CLS");
        int carnet;
        char nombre[30];
        char apellidos[40];
        char carrera[30];
        cout << endl
             << endl
             << endl
             << endl;
        cout << "\t\t\t\t Ingreso datos del estudiante " << endl
             << endl;
        cout << "\t\t\t\tDigite el carnet del estudiante : ";
        cin >> carnet;
        cin.ignore();
        cout << "\t\t\t\tDigite el nombre del estudiante : ";
        cin.getline(nombre, 30);
        cout << "\t\t\t\tDigite los apellidos del estudiante : ";
        cin.getline(apellidos, 40);
        cout << "\t\t\t\tDigite la carrera del estudiante : ";
        cin.getline(carrera, 30);
        Estudiante est = Estudiante(carnet, nombre, apellidos, carrera);
        lista.push_back(est);
    }

    void mostrar()
    {
        system("CLS");
        cout << "*** Lista de estudiantes ***" << endl;
        cout << "------------------------------" << endl;
        cout << "Carnet\tNombre\tApellidos\tCarrera" << endl;
        for (size_t i = 0; i < lista.size(); i++)
        {
            cout << lista[i].getCarnet() << "\t";
            cout << lista[i].getNombre() << " " << lista[i].getApellidos() << "\t";
            cout << lista[i].getCarrera() << endl;
        }
        cout << endl;
        system("PAUSE");
    }
};