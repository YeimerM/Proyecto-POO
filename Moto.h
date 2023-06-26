#ifndef MOTO_HH
#define MOTO_HH

#include "Vehiculo.h"
#include <string>
using namespace std;

class Moto : public Vehiculo {

private:
  string cilindraje;
  string tipoCombustion;

public:
  // Constructor
  Moto(string placa, string marca, string color, int horaEntrada, string cilindraje, string tipoCombustion);

  // Destructor
  ~Moto();

  string getCilindraje();
  string getTipoCombustion();

  void pagar() override;

};

#else
class Moto;
#endif