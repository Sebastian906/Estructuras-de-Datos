#include <iostream>
#include <iomanip>
using namespace std;

class Estudiante {
    private:
        int carnet;
        string nombre;
        double montoBeca;

    public:
        Estudiante() {};
        Estudiante(int _carnet, string _nombre, double _montoBeca) {
            carnet = _carnet;
            nombre = _nombre;
            montoBeca = _montoBeca;
        }
        void setCarnet(int _carnet) { carnet = _carnet; }
        void setNombre(string _nombre) { nombre = _nombre; }
        void setMontoBeca(double _montoBeca) { montoBeca = _montoBeca; }
        int getCarnet() { return carnet; }
        string getNombre() { return nombre; }
        double getMontoBeca() { return montoBeca; }
};

int main() {
    setlocale(LC_ALL, "");
    Estudiante estudiante;
    estudiante.setCarnet(12345);
    estudiante.setNombre("Enrique");
    estudiante.setMontoBeca(1500.50);
    cout << "Carnet : " << estudiante.getCarnet() << endl;
    cout << "Nombre : " << estudiante.getNombre() << endl;
    cout << "Monto de Beca : " << fixed << setprecision(2) 
        << estudiante.getMontoBeca();
    return 0;
}