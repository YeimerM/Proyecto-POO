#ifndef VEHICULO_HH
#define VEHICULO_HH

#include <string>
#include <vector>
using namespace std;

class Vehiculo {

protected:

  string placa;
  string color;
  string marca;
  int horaEntrada;

public:
  // Método Constructos
  Vehiculo(string placa, string marca, string color, int horaEntrada);
  // Método Destructor
  virtual ~Vehiculo ();

  // Getters
  string getPlaca();
  string getMarca();
  string getColor(); 
  int getHora();

  virtual void pagar() = 0;
};

#else
class Vehiculo;
#endif
