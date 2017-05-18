#include <iostream>

using namespace std;

int main()
{
    int fecha=0;
    int dia=0;
    int mes=0;
    int anio=0;
    int fecha_sin_anio=0;
    cout<<"Ingrese la fecha en el siguiente formato: AAAAMMDD."<<endl;
    cin>>fecha;
    anio=fecha/10000;
    fecha_sin_anio=fecha-anio*10000;
    mes=fecha_sin_anio/100;
    dia=fecha_sin_anio-mes*100;
    cout<<"El dia es: "<<dia<<endl;
    cout<<"El mes es: "<<mes<<endl;
    cout<<"El año es: "<<anio<<endl;
    return 0;
}
