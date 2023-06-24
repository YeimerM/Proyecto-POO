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
  int minutoEntrada;

public:
  // Método Constructos
  Vehiculo(string marca, string color, string placa, int horaEntrada, int minutoEntrada);
  // Método Destructor
  virtual ~Vehiculo ();

  // Getters
  string getPlaca();
  string getColor(); 
  string getMarca();
  int getHora();
  int getMinuto();

  virtual void pagar() = 0;
};

#else
#class Vehiculo;
#endif
