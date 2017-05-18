#include <iostream>

using namespace std;

int main()
{
    float numero=0;
    int cant=0;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    while(0<=numero){
        cout<<"El numero ingresado es: "<<numero<<endl;
        cin>>numero;
        cant++;
    }
    cout<<"Se ingresaron "<<cant<<" numeros.";
    return 0;
}
