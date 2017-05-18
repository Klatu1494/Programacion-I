#include <iostream>

using namespace std;

int main()
{
    int edad=0;
    cout<<"Ingrese una edad: ";
    cin>>edad;
    if(edad<=12){
        cout<<"menor";
    }
    else{
        if(edad<=18){
            cout<<"cadete";
        }
        else{
            if(edad<=26){
                cout<<"juvenil";
            }
            else{
                cout<<"mayor";
            }
        }
    }
    return 0;
}
