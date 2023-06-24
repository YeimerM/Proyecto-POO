#ifndef VEHICULO_HH
#define VEHICULO_HH

#include <string>
#include <vector>
using namespace std;

class Vehiculo {
//----------------------------------------------------------------------------------------------
  protected:

  string placa;
  string color;
  string marca;
//----------------------------------------------------------------------------------------------
  public:

  virtual ~Vehiculo ();

  virtual string placaVehiculo ();

  virtual string colorVehiculo ();
  
  virtual string marcaVehiculo ();
  
//----------------------------------------------------------------------------------------------
};

#else
#class Vehiculo;
#endif
