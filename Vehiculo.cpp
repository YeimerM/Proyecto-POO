#include "Vehiculo.h"
#include <string>
using namespace std;

Vehiculo::Vehiculo(string placa, string marca, string color, int horaEntrada)
: placa(placa), marca(marca), color(color), horaEntrada(horaEntrada){}

Vehiculo::~Vehiculo(){}

string Vehiculo::getPlaca()
{
  return placa; 
}

string Vehiculo::getMarca()
{
  return marca;
}

string Vehiculo::getColor()
{
  return color;
}

int Vehiculo::getHora()
{
  return horaEntrada;
}