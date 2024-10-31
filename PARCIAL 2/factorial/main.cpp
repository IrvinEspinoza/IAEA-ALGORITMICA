//factorial

#include <iostream>

using namespace std;

int main(){
  int num;
  int opcion;
  int i;
  int factorial;

  while (true){
     cout << "\nMenu Principal\n";
     cout << "1.- Calcular factorial\n";
     cout << "2.- Mostrar tabla de multiplicar\n";
     cout << "3.- Salir\n";
     cin >> opcion;

     if (opcion <1 || opcion >3){
        cout << "Opcion no valida, intente de nuevo."; continue;
     }
     if (opcion ==3){
        cout << "saliendo del programa.";
        break;
     }
     do {
        cout << "ingrese un numero positivo:";
        cin >> num;
        if (num <0){
            cout << "El numero debe de ser positivo. Intenta de nuevo.";
        }
     }while (num < 0);

     switch (opcion){
 case 1:
    factorial = 1;
        for (i = 1; i<=num; i++){
            factorial  *=i;
        }
        cout << "El factorial de " << num << " es: "<< factorial<< endl;
        break;

 case 2:
     i = 1;
     cout << "Tabla de multiplicar del "<< num << ":\n";
     do {
        cout << num << "*" << i << "=" << num * i << endl;
        i++;
     } while (i <= 10);
     break;
  }
}
return 0;
}
