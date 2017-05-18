#include <iostream>

using namespace std;

int main()
{
    int N=0;
    int M=0;
    int i=0;
    int producto=0;
    cout<<"Ingrese un numero natural.";
    cin>>N;
    cout<<"Ingrese otro numero natural.";
    cin>>M;
    for(; i<N; i++){
        producto=producto+M;
    }
    cout<<"Su producto es: "<<producto;
    return 0;
}
