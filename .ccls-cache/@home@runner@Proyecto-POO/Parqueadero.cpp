#include "Parqueadero.h"
#include "Vehiculo.h"
#include "Carro.h"
#include "Camion.h"
#include "Moto.h"
#include <iostream>
using namespace std;

Parqueadero::Parqueadero(){}

Parqueadero::~Parqueadero(){}

void Parqueadero::ingresarVehiculo()
{
  string placa, marca, color;
  int tipo, horaEntrada;

  cout << "Digite la hora de entrada (Formato 24h)" << endl;
  cin >> horaEntrada;
  cout << "Tipo de Vehiculo (1.Carro 2.Camion 3.Moto)" << endl;
  cin >> tipo;

  cout << "Placa: ";
  cin >> placa;
  cout << "Marca: ";
  cin >> marca;
  cout << "Color: ";
  cin >> color;

  if (tipo==1)
  {
    int puertas, airbags;
    
    cout <<"Cantidad de puertas: ";
    cin >> puertas;
    cout <<"Cantidad de Airbags: ";
    cin >> airbags;

    vehiculos.push_back(new Carro(placa, marca, color, horaEntrada, puertas, airbags));
  } else if (tipo==2)
  {
    int ejes, carga;

    cout <<"Cantidad de ejes: ";
    cin>> ejes;
    cout <<"Ingrese su carga: ";
    cin>> carga;

    vehiculos.push_back(new Camion(placa, marca, color, horaEntrada, ejes, carga));
  } else if (tipo==3)
  {
    string cilindraje, combustion;
    
    cout << "Ingrese cilindraje: ";
    cin>> cilindraje;
    cout << "Ingrese combustion: ";
    cin>> combustion;

    vehiculos.push_back(new Moto(placa, marca, color, horaEntrada, cilindraje, combustion));
  } else
  {
    cout<< "Su eleccion no es valida"<< endl;
  }
}

void Parqueadero::retirarVehiculo()
{
  string placa;
  cout << "Placa del vehiculo a retirar: " << endl;
  cin >> placa;

  bool encontrado = false;
  for (auto it = vehiculos.begin(); it != vehiculos.end(); ++it) {
    if ((*it)->getPlaca() == placa) {
      encontrado = true;
      (*it)->pagar();
      delete *it;
      vehiculos.erase(it);
      break;
    }
  }

  if (!encontrado) {
    cout << "El vehiculo no se encuentra en el parqueadero" << endl;
  }
}
void Parqueadero::buscarVehiculo()
{
  
}
void Parqueadero::mostrarValorCalculado()
{
  
}
void Parqueadero::guardarInformacion()
{
  
}
void Parqueadero::cargarInformacion()
{
  
}
void Parqueadero::mostrarInforme()
{
  
}

void Parqueadero::mostrarMenu()  {
  cout << "Menu de opciones:" << endl;
  cout << "1. Ingresar vehiculo" << endl;
  cout << "2. Retirar vehiculo" << endl;
  cout << "3. Buscar vehiculo por placa" << endl;
  cout << "4. Mostrar valor facturado por tipo de vehiculo" << endl;
  cout << "5. Guardar informacion" << endl;
  cout << "6. Cargar informacion" << endl;
  cout << "7. Mostrar informe" << endl;
  cout << "8. Salir" << endl;
}