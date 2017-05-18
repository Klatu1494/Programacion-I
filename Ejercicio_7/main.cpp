#include <iostream>

using namespace std;

int main()
{
    int ab=0;
    int bc=0;
    int ca=0;
    cout<<"Ingrese la longitud del primer lado del triangulo.";
    cin>>ab;
    cout<<"Ingrese la longitud del segundo lado del triangulo.";
    cin>>bc;
    cout<<"Ingrese la longitud del tercer lado del triangulo.";
    cin>>ca;
    if(ab<bc+ca&&bc<ab+ca&&ca<ab+bc){
        cout<<"Forman triangulo.";
    }
    else{
        cout<<"No forman triangulo";
    }
    return 0;
}
