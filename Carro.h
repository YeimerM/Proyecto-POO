#ifndef CARRO_HH
#define CARRO_HH

#include "Vehiculo.h"

class Carro : public Vehiculo{

private:
  int numeroPuertas;
  int numeroAirbags;

public:

  // Método Constructor
  Carro(string placa, string marca, string color,int horaEntrada, int numeroPuertas, int numeroAirbags);
  // Método Destructor
  ~Carro();
  // Getters
  int getNumeroPuertas();
  int getNumeroAirbags();
  
  // Pagar horas de parqueo
  void pagar() override;
};

#else
class Carro;
#endif