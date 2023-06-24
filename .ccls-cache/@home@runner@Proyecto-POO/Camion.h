#ifndef CAMION_HH
#define CAMION_HH

#include "Vehiculo.h"
#include <string>
#include <iostream>
using namespace std;

class Camion : public Vehiculo {

  private:
    int numeroEjes;
    int capacidadCarga;

  public:

    //Metodo constructor
    Camion(string placa, string marca, string color, int horaEntrada, int minutoEntrada, int numeroEjes, int capacidadCarga); 

    //Metodo destructor
    ~Camion(); 

    int getNumeroEjes();
    int getCapacidadCarga();

    void pagar() override;
    
};

#else
#class Camion;
#endif