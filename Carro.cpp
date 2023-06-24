#include "Carro.h"
#include <iostream>
using namespace std;

Carro::Carro(string placa, string color, string marca, int horaEntrada, int minutoEntrada, int numeroPuertas, int numeroAirbags)
: Vehiculo(placa, marca, color, horaEntrada, minutoEntrada), numeroPuertas(numeroPuertas), numeroAirbags(numeroAirbags) {}

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
  int pagar = 1000;
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