#include <iostream>

using namespace std;

int main()
{
    float numero=0;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    cout<<"Su quinta parte es: "<<numero/5<<endl;
    cout<<"El resto de dividir "<<numero<<" por 5 es "<<int(numero)%5+numero-int(numero)<<endl; //ya que el operador % no acepta floats como parametros, calculo por un lado el modulo de la parte entera y luego le sumo la parte decimal
    cout<<"La septima parte de la quinta parte es: "<<numero/35<<endl; //ya que x/7/5==x/35
    return 0;
}
