#include "Moto.h"
#include <iostream>

using namespace std;

Moto::Moto(string placa, string marca, string color, int horaEntrada, string cilindraje,string tipoCombustion)
: Vehiculo(placa, marca, color, horaEntrada), cilindraje(cilindraje), tipoCombustion(tipoCombustion){}

Moto::~Moto() {}

string Moto::getTipoCombustion()
{
  return tipoCombustion;
}

string Moto::getCilindraje()
{
  return cilindraje;
}



/*

   1ra hora o fracc = 2000
   2 - 12 horas o fracc = 1000
   12 horas en adelante = 500
   
*/

void Moto::pagar()
{
  int horaSalida = 0;
  cout << "Ingrese la hora de salida (Formato 24h)" << endl;
  cin >> horaSalida;
  int tiempoTotal = horaSalida-horaEntrada;


  double valor = 0.0;
  if (tiempoTotal <= 1) {
      valor = 2000.0;
  } else if (tiempoTotal <= 12) {
      valor = 2000.0 + (1000.0 * (tiempoTotal - 1));
  } else {
      valor = 7000.0 + (500.0 * (tiempoTotal - 12));
  }

  // Mostrar información de pago
  cout << "Placa: " << placa << endl;
  cout << "Tipo: Moto" << endl;
  cout << "Valor a pagar: " << valor << endl;
}