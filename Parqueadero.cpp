#include "Parqueadero.h"
#include "Vehiculo.h"
#include "Carro.h"
#include "Camion.h"
#include "Moto.h"
#include <iostream>
#include <fstream>
#include <sstream>
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
  string placa;
  cout << "placa del vehiculo" << endl;
  cin >> placa;

  bool encontrado = false;
  for (auto vehiculo : vehiculos) {
    if (vehiculo->getPlaca() == placa) {
      encontrado = true;
      cout << "Placa: " << vehiculo->getPlaca() << endl;
      cout << "Marca: " << vehiculo->getMarca() << endl;
      cout << "Color: " << vehiculo->getColor() << endl;
      cout << "Hora de entrada: " << vehiculo->getHora() << endl;
      break;
    }
  }
  if (!encontrado) {
  cout << "El vehiculo no se encuentra en el parqueadero" << endl;
  }
}


void Parqueadero::mostrarValorCalculado()
{
  double totalCarro = 0.0;
  double totalCamion = 0.0;
  double totalMoto = 0.0;

  for (auto vehiculo : vehiculos) {
    if (dynamic_cast<Carro*>(vehiculo) != nullptr) {
      totalCarro += 1.0;
    } else if(dynamic_cast<Camion*>(vehiculo) != nullptr) {
      totalCamion += 1.0;
    } else if (dynamic_cast<Moto*>(vehiculo) != nullptr) {
      totalMoto += 1.0;
    }
  }

  cout << "TOTAL FACTURADO POR TIPO DE VEHICULO" << endl;
  cout << "Carro: " << totalCarro << endl;
  cout << "Camion: " << totalCamion << endl;
  cout << "Moto: " << totalMoto << endl;
}


void Parqueadero::guardarInformacion()
{
  ofstream archivo("Parqueadero.txt");

  if (archivo.is_open()){
    for (auto vehiculo : vehiculos) {
      archivo << vehiculo->getPlaca();
      archivo << vehiculo->getMarca();
      archivo << vehiculo->getColor();
      archivo << vehiculo->getHora() << endl;

      if (auto* carro = dynamic_cast<Carro*>(vehiculo)) {
      archivo << carro->getNumeroPuertas(); 
      archivo << carro->getNumeroAirbags();
      } else if (auto* camion = dynamic_cast<Camion*>(vehiculo)) {
        archivo << camion->getNumeroEjes();
        archivo << camion->getCapacidadCarga();
      } else if (auto* moto = dynamic_cast<Moto*>(vehiculo)) {
        archivo << moto->getCilindraje();
        archivo << moto->getTipoCombustion();
      }
      
    }

    archivo.close();
    cout << "¡Información guardada con exito!" << endl;
  } else {
    cout << "No se pudo abrir el archivo para guardar la información" << endl;
  }
}


void Parqueadero::cargarInformacion()
{
  ifstream archivo("Parqueadero.txt");
  if (archivo.is_open()){
     string linea;
     while (getline(archivo,linea)) {
        istringstream iss(linea);
        string placa, marca, color;
        int puertas, airbags;
        int ejes, capacidad;
        string cilindraje, combustion;
        int horaEntrada;
    
        getline(iss,placa);
        getline(iss,marca);
        getline(iss,color);
        iss >> horaEntrada;
    
        if (iss >> puertas >> airbags) {
            vehiculos.push_back(new Carro(placa,marca,color,horaEntrada,puertas,airbags));
        } else if (iss >> ejes >> capacidad) {
            vehiculos.push_back(new Camion(placa,marca,color,horaEntrada,ejes,capacidad));
        } else if (iss >> cilindraje >> combustion) {
            vehiculos.push_back(new Moto(placa,marca,color,horaEntrada,cilindraje,combustion));
        } else {
        cout << "No se pudo leer correctamente los atributos del Vehiculo" << endl;
        }
    
    // vehiculos.push_back(new Vehiculo(placa,marca))
    }

  archivo.close();
  cout << "¡información cargada con éxito!" << endl;
    
  } else {
    cout << "No se pudo abrir el archivo para cargar la información" << endl;
  }
}


void Parqueadero::mostrarInforme()
{
  cout << "INFORME DEL PARQUEADERO" << endl;
  cout << "" << endl;
  for (auto vehiculo : vehiculos) {
    cout << "Placa: " << vehiculo->getPlaca() << endl;
    cout << "Marca: " << vehiculo->getMarca() << endl;
    cout << "Color: " << vehiculo->getColor() << endl;
    cout << "Hora de entrada: " << vehiculo->getHora() << endl;
    cout << "-----------------------------" << endl;
  }
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