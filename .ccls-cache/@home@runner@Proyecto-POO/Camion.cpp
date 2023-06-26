#include "Camion.h"

Camion::Camion(string placa, string marca, string color, int horaEntrada, int numeroEjes, int capacidadCarga)
: Vehiculo(placa, marca, color, horaEntrada), numeroEjes(numeroEjes), capacidadCarga(capacidadCarga){}

Camion::~Camion(){}

int Camion::getNumeroEjes()
{
  return numeroEjes;
}

int Camion::getCapacidadCarga()
{
  return capacidadCarga;
}

/*

   1ra hora o fracc = 4000
   2 - 12 horas o fracc = 2500
   12 horas en adelante = 1500
   
*/
void Camion::pagar()
{
  int pagar = 2000;
}