#include <iostream>

using namespace std;

int main()
{
    int dia=0;
    int mes=0;
    int anio=0;
    cout<<"Ingrese el dia actual: ";
    cin>>dia;
    cout<<"Ingrese el mes actual: ";
    cin>>mes;
    cout<<"Ingrese el año actual: ";
    cin>>anio;
    cout<<"La fecha en formato AAAAMMDD es: "<<anio*10000+mes*100+dia<<endl;
    return 0;
}
