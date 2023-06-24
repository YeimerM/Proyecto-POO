#ifndef PARQUEADERO_HH
#define PARQUEADERO_HH

#include "Vehiculo.h"
#include <vector>
using namespace std;

class Parqueadero
{
  protected:
  vector <Vehiculo *> vehiculos; 
// Faltan los otros .h y cpp


  public:

  Parqueadero();
  ~Parqueadero();

  void ingresarVehiculo();

  virtual void retirarVehiculo();

  void buscarVehiculo();

  virtual void mostrarValorCalculado();

  void guardarInformacion();

// Virtual void ya que se maneja puntero para un solo dato
  virtual void cargarInformacion();

  void mostrarInforme();

};

#else
#class Parqueadero;
#endif