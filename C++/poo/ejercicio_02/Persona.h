#pragma once
#include <iostream>
using namespace std;
class Persona
{
private:
    int carnet;
    string nombre;
    string apellidos;

public:
    Persona() {};
    Persona(int _carnet, string _nombre, string _apellidos)
    {
        carnet = _carnet;
        nombre = _nombre;
        apellidos = _apellidos;
    }
    void setCarnet(int _carnet) { carnet = _carnet; }
    void setNombre(string _nombre) { nombre = _nombre; }
    void setApellidos(string _apellidos) { apellidos = _apellidos; }
    int getCarnet() { return carnet; }
    string getNombre() { return nombre; }
    string getApellidos() { return apellidos; }
};