#include <iostream>

using namespace std;

int main(){
   int menu;
   int PIN;
   int Dinero;
   int Transferir;
   int Confirmar;
cout << "Menu Principal \n\n1.-Retirar dinero \n2.-Consultar saldo \n3.-Cambiar Nip \n4.-Transferir fondos \n5.-Salir." << endl;
cout << "�Que opcion deseas?";
cin >> menu;

    switch (menu){
       case 1:
       cout << "ingresar la cantidad de retirar: ";
       cin >> Dinero;
       cout << "\nEl dinero ah sido retirado correctamente." ; break;
       case 2:
        cout << "\nTu saldo es: $";
        cout << "\n\n 120,000$";break;
       case 3:
        cout << "Ingresar Nip: ";
        cin >> PIN;
        cout << "Ingresar un nuevo Nip: ";
        cin >> PIN;
        cout << "Confirmar el nuevo Nip: ";
        cin >> PIN;
        break;
       case 4:
        cout << "ingresa el numero de cuenta a la que desea transferir: ";
        cin >> Transferir;
        cout << "ingrese la cantidad a tranferir:  \nMAXIMO 50000. ";
        cin >> Dinero;
        cout << "confirmar transferencia \nsi o no: ";
        cin >> Confirmar;
        cout << "Se completo correctamente el proceso.";
        break;
       case 5:
        cout << "pulsa cualquier tecla para salir.";
        break;
       default :
        cout <<"\n Error Proceso terminado."; break;
    }
        return 0;
    }

