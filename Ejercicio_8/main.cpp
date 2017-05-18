#include <iostream>

using namespace std;

int cantidadDeLadosIgualesAlPrimero(int L1, int L2, int L3){
    int cantidad=1;
    if(L1==L2) cantidad++;
    if(L1==L3) cantidad++;
    return cantidad;
}

int mayorEntreDos(int x, int y){
    if(x<y){
        return y;
    }
    return x;
}

int mayorEntreTres(int x, int y, int z){
    return mayorEntreDos(mayorEntreDos(x, y), z);
}

int main()
{
    //declaracion e inicializacion de variables
    int L1=0;
    int L2=0;
    int L3=0;
    int cantidadDeLadosIguales=0;
    //ingreso de datos
    cout<<"Ingrese la longitud del primer lado del triangulo.";
    cin>>L1;
    cout<<"Ingrese la longitud del segundo lado del triangulo.";
    cin>>L2;
    cout<<"Ingrese la longitud del tercer lado del triangulo.";
    cin>>L3;
    //determinacion de si el triangulo es isoceles, equilatero o escaleno
    cantidadDeLadosIguales=mayorEntreTres(cantidadDeLadosIgualesAlPrimero(L1, L2, L3), cantidadDeLadosIgualesAlPrimero(L2, L1, L3), cantidadDeLadosIgualesAlPrimero(L3, L2, L1));
    //mostrar resultado
    cout<<"El triangulo es ";
    switch(cantidadDeLadosIguales){
        case 1:
            cout<<"escaleno";
            break;
        case 2:
            cout<<"isoceles";
            break;
        case 3:
            cout<<"equilatero";
            break;
    }
    cout<<".";

    return 0;
}
