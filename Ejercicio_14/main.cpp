#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int numero=0;
    int suma_menores=0;
    float suma_mayores=0;
    float cant_mayores=0;
    for(; i<5; i++){
        cout<<"Ingrese un entero: ";
        cin>>numero;
        if(numero<-10){
            suma_menores=suma_menores+numero;
        }
        if(numero>100){
            suma_mayores=suma_mayores+numero;
            cant_mayores=cant_mayores+1;
        }
    }
    cout<<"La suma de los numeros menores que -10 ingresados es: "<<suma_menores<<endl;
    cout<<"El promedio de los numeros mayores que 100 ingresados es: "<<suma_mayores/cant_mayores<<endl;
    return 0;
}
