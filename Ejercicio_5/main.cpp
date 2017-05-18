#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    cout<<"Ingrese un entero: ";
    cin>>x;
    do{
        cout<<"Ingrese otro entero distinto del anterior: ";
        cin>>y;
    } while(x==y); //este loop asegura que el segundo valor ingresado no sea igual al primero
    if(x<y){
        cout<<"El último entero es el mayor.";
    }
    else{
        cout<<"El primer entero es el mayor.";
    }
    return 0;
}
