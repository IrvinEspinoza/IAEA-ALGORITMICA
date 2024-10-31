#include <iostream>

using namespace std;

int main()
{
 int num;
 cout <<"ingrese el numero que desea multiplicar:"<< endl;
 cin >> num;

 cout <<"tabla de multiplicar del" <<num<<":"<< endl;

 for(int i=1; i<=10;i++)

cout << num<<"x"<< i <<"="<<num * i<< endl;

return 0;
}
