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
  int horaSalida = 0;
  cout << "Ingrese la hora de salida (Formato 24h)" << endl;
  cin >> horaSalida;
  int tiempoTotal = horaSalida-horaEntrada;

  double valor = 0.0;
  if (tiempoTotal <= 1) {
    valor = 4000.0;
  } else if (tiempoTotal <= 12) {
    valor = 4000.0 + (2500.0 * (tiempoTotal - 1));
  } else {
    valor = 14000.0 + (1500.0 * (tiempoTotal - 12));
  }

  // Se muestra la información de pago
  cout << "Placa: " << placa << endl;
  cout << "Tipo: Camión" << endl;
  cout << "Valor a pagar: $" << valor << endl;
}