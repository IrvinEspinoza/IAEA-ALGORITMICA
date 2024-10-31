#include <iostream>

using namespace std;

int main(){
    int opcion_Hamburguesa, opcion_pago;
    double precio;

    cout << "BIENVENIDO AL RESTAURANTE \n\nMENU PRINCIPAL" << endl;
    cout << "1.-Hamburguesa sencilla - $100" << endl;
    cout << "2.-Hamburguesa doble - $150" << endl;
    cin >> opcion_Hamburguesa;
    switch (opcion_Hamburguesa){
case 1:
    cout <<"has selecionado la Hamburguesa sencilla." << endl;
    precio = 100;
    cout << "El costo es $" << precio << "." <<endl;
    cout << "Tu numero de orden es: 101" << endl;
    break;
  case 2:
    cout << "Has seleccionado la Hamburguesa Doble." << endl;
    precio = 150;
    cout << "El costo es $" << precio << "." << endl;
    cout << "Tu numero de orden es: 102" << endl;
    break;
  default:
   cout << "opcion no valida. Por favor, Selecciona 1 0 2." << endl;
   return 1;
}
cout << "seleciona forma de pago:" << endl;
cout << "1. Pago en efectivo" << endl;
cout << "2. Pago con tarjeta" << endl;
cin >> opcion_pago;

switch (opcion_pago){
  case 1:
      cout << "Has seleccionado pago en efectivo."<< endl;
      break;
  case 2:
    cout << "Has seleccionado el pago en tarjeta." << endl;
    break;

  default:
    cout << "opcion no valida. Por favor, Selecciona 1 o 2.";
    return 1;
}
cout << "Gracias por su comnpra. Tu orden sera entregada en un momento" << endl;
return 0;

}

