#include <iostream>

using namespace std;

bool esBisiesto(int anio){
    if(anio%4==0){
        if(anio%100==0){
            return anio%400==0;
        }
        else{
            return true;
        }
    }
    return false;
}

int cantidadDeDias(int mes, int anio){
    if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
        return 31;
    }
    else{
        if(mes==2){
            if(esBisiesto(anio)){
                return 29;
            }
            else{
                return 28;
            }
        }
        else{
            return 30;
        }
    }
}

int main()
{
    int mes=0;
    int anio=0;
    cout<<"Ingrese un mes.";
    cin>>mes;
    cout<<"Ingrese un año.";
    cin>>anio;
    cout<<"El mes ingresado tiene "<<cantidadDeDias(mes, anio)<<" dias.";
    return 0;
}
