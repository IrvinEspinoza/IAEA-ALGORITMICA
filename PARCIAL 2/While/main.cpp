#include <iostream>

using namespace std;

int main()
{
    float califacion1, califacion2, califacion3, promedio;
    cout<<"Ingrese la califacion del parcial 1:"<<endl;
    cin>> califacion1;

    cout<<"ingrese la califacion del parcial 2:"<<endl;
    cin>> califacion2;

    cout<<"ingrese la califacion del parcial 3:"<<endl;
    cin>> califacion3;
    promedio = (califacion1 + califacion2 + califacion3) / 3;
    cout<<promedio<<endl;
    if(promedio>= 7){
        cout<<"aprobaste"<<endl;
    }else{

        cout<<"reprobaste"<<endl;
    }

    return 0;
}
