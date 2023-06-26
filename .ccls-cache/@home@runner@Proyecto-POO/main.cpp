#include "Vehiculo.h"
#include "Parqueadero.h"
#include <iostream>
using namespace std;

int main() {
  Parqueadero parqueadero;
  int opcion;

  do {
    parqueadero.mostrarMenu();
    cout << "Seleccione una opción: " << endl;
    cin >> opcion;

    switch (opcion) {
      case 1:
      parqueadero.ingresarVehiculo();
      break;
      case 2:
      parqueadero.retirarVehiculo();
      break;
      case 3:
      parqueadero.buscarVehiculo();
      break;
      case 4:
      parqueadero.mostrarValorCalculado();
      break;
      case 5:
      parqueadero.guardarInformacion();
      break;
      case 6:
      parqueadero.cargarInformacion();
      break;
      case 7:
      parqueadero.mostrarInforme();
      break;
      case 8:
      cout << "Saliendo del programa..." << endl;
      break;
      default:
      cout << "Opción inválida. Intente de nuevo" << endl;
      break;
      
    }
  } while (opcion != 8);
  return 0;
}