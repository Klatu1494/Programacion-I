#include <iostream>

using namespace std;

int main()
{
    int tipo=0;
    string motivo="";
    float valor=0;
    char gravedad=' ';
    int i=0;
    float valorL=0;
    float valorM=0;
    float valorG=0;
    int cantInfraccionesDeClausura;
    for(; i<20; i++){
        cout<<"Ingrese el tipo de infraccion (1, 2, 3 o 4): ";
        cin>>tipo;
        cout<<"Ingrese el motivo de la infraccion: ";
        cin>>motivo;
        cout<<"Ingrese el valor de la multa: ";
        cin>>valor;
        cout<<"Ingrese la gravedad de la infraccion (L, M o G): ";
        cin>>gravedad;
        switch(gravedad){
            case 'L':
                valorL=valorL+valor;
                break;
            case 'M':
                valorM=valorM+valor;
                break;
            case 'G':
                valorG=valorG+valor;
                if(2<tipo){
                    cantInfraccionesDeClausura=cantInfraccionesDeClausura+1;
                }
                break;
        }
    }
    cout<<"El valor total de las multas de gravedad L es: "<<valorL<<endl;
    cout<<"El valor total de las multas de gravedad M es: "<<valorM<<endl;
    cout<<"El valor total de las multas de gravedad G es: "<<valorG<<endl;
    if(3<cantInfraccionesDeClausura){
        cout<<"Clausurar fabrica.";
    }
    return 0;
}
