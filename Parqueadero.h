#ifndef PARQUEADERO_HH
#define PARQUEADERO_HH

#include "Vehiculo.h"
#include <vector>
using namespace std;

class Parqueadero
{
  protected:
  vector <Vehiculo *> vehiculos; 


  public:

  Parqueadero();
  ~Parqueadero();

  void ingresarVehiculo();

  void retirarVehiculo();

  void buscarVehiculo();

  void mostrarValorCalculado();

  void guardarInformacion();

  void cargarInformacion();

  void mostrarInforme();

  void mostrarMenu();

};

#else
class Parqueadero;
#endif