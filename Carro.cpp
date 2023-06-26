#include "Carro.h"
#include <iostream>
using namespace std;

Carro::Carro(string placa, string color, string marca, int horaEntrada, int numeroPuertas, int numeroAirbags)
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
  cout << "Valor a pagar: " << valor << endl;
  
}



  // int minutos = 0;
  // int precio = 0;
  // cout << "Ingrese el tiempo de parqueo del vehiculo (En minutos)" << endl;
  // cin >> minutos;
  // double horas = minutos / 60;

  // if (horas == 1) {
  //   precio = horas * 3000;
  // } else if (horas >= 2 && horas <= 12) {
  //   precio = 3000 + (horas - 1) * 2000;
  // } else if (horas > 12) {
  //   precio = 25000 + (horas - 12) * 1500;
  // }