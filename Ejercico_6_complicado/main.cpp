#include <iostream>

using namespace std;

int fechaANumero(int dia, int mes, int anio){
    return anio*10000+mes*100+dia;
}

void numeroAFecha(int fecha, int *dia, int *mes, int *anio){
    int fecha_sin_anio=0;
    *anio=fecha/10000;
    fecha_sin_anio=fecha-*anio*10000;
    *mes=fecha_sin_anio/100;
    *dia=fecha_sin_anio-*mes*100;
    return;
}

int obtenerNuevaFecha(){
    int dia=0;
    int mes=0;
    int anio=0;
    cout<<"Ingrese el numero de dia (1-31) de una fecha pasada.";
    cin>>dia;
    cout<<"Ingrese el numero de mes (1-12) de una fecha pasada.";
    cin>>mes;
    cout<<"Ingrese el año de una fecha pasada.";
    cin>>anio;
    return fechaANumero(dia, mes, anio);
}

int mayorEntre(int x, int y){
    if(y<x){
        return x;
    }
    return y;
}

int main()
{
    int dia=0;
    int mes=0;
    int anio=0;
    int cantidadDeFechasAIngresar=2;
    int fechaMasReciente=obtenerNuevaFecha();
    for(int i=0; i<cantidadDeFechasAIngresar-1; i++){ //le resto 1 a la cantidad de fechas porque ya obtuve una al inicializar fechaMasReciente
        fechaMasReciente=mayorEntre(obtenerNuevaFecha(), fechaMasReciente);
    }
    numeroAFecha(fechaMasReciente, &dia, &mes, &anio);
    cout<<"La fecha mas reciente entre las ingresadas es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
    return 0;
}
