#include <iostream>

using namespace std;

int main()
{
    int pasword;
    int Correctpasword = 12345;
    do {
        cout << "Usuario; ADMIN \nPasword;" << endl;
        cin >> pasword;
        if (pasword != Correctpasword) {
           cout << "contrase�a incorrecta. Vuelve a intentarlo." << endl;
        }
    } while (pasword != Correctpasword);
            cout << "Contrase�a correcta, bienvenido." << endl;

    return 0;
