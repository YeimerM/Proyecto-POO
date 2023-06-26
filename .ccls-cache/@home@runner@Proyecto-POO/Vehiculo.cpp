#include "Vehiculo.h"
#include <string>
using namespace std;

Vehiculo::Vehiculo(string marca, string color, string placa, int horaEntrada)
: color(color), marca(marca), placa(placa), horaEntrada(horaEntrada){}

Vehiculo::~Vehiculo(){}

string Vehiculo::getColor()
{
  return color;
}

string Vehiculo::getMarca()
{
  return marca;
}

string Vehiculo::getPlaca()
{
  return placa; 
}

int Vehiculo::getHora()
{
  return horaEntrada;
}