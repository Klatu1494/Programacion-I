#include <iostream>

using namespace std;

int main()
{
    int fecha1=0;
    int fecha2=0;
    cout<<"Ingrese una fecha del pasado en formato AAAAMMDD.";
    cin>>fecha1;
    cout<<"Ingrese otra fecha del pasado en formato AAAAMMDD.";
    cin>>fecha2;
    if(fecha1<fecha2){
        cout<<"La segunda fecha es mas reciente.";
    }
    else{
        if(fecha1==fecha2){
            cout<<"Las fechas son iguales.";
        }
        else{
            cout<<"La primera fecha es mas reciente.";
        }
    }
    return 0;
}
