#include "Carro.h"
#include <iostream>
using namespace std;

Carro::Carro(string placa, string marca, string color, int horaEntrada, int numeroPuertas, int numeroAirbags)
: Vehiculo(placa, marca, color, horaEntrada), numeroPuertas(numeroPuertas), numeroAirbags(numeroAirbags) {}

Carro::~Carro(){}

int Carro::getNumeroAirbags()
{
  return numeroAirbags;
}

int Carro::getNumeroPuertas()
{
  return numeroPuertas;
}


/*

   1ra hora o fracc = 3000
   2 - 12 horas o fracc = 2000
   12 horas en adelante = 1000
   
*/
void Carro::pagar()
{
  int horaSalida = 0;
  cout << "Ingrese la hora de salida (Formato 24h)" << endl;
  cin >> horaSalida;
  int tiempoTotal = horaSalida-horaEntrada;

  double valor = 0.0;
  if (tiempoTotal <= 1) {
    valor = 3000.0;
  } else if (tiempoTotal <= 12) {
    valor = 3000.0 + (2000.0 * (tiempoTotal - 1));
  } else {
    valor = 11000.0 + (1000.0 * (tiempoTotal - 12));
  }

  // Se muestra la información de pago
  cout << "Placa: " << placa << endl;
  cout << "Tipo: Carro" << endl;
  cout << "Valor a pagar: $" << valor << endl;
  
}