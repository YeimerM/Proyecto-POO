#include "Moto.h"

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
  int pagar = 3000;
}