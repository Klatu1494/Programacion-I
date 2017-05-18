#include <iostream>

using namespace std;

int main() {
  int k=0;
  int puntaje=0;
  char resultado='P';
  cout<<"Ingrese la cantidad de equipos: ";
  cin>>k;
  for(int i=1; i<=k; i++){
    for(int j=1; j<=k; j++){
      //un equipo no puede jugar contra sí mismo
      if(i!=j){
        cout<<"Ingrese el resultado del partido entre el equipo "<<i<<" y el equipo "<<j<<": ";
        cin>>resultado;
        switch(resultado){
          case 'G':
            puntaje=puntaje+3;
            break;
          case 'E':
            puntaje=puntaje+1;
            break;
          default:
            break;
        }
      }
    }
    cout<<"El equipo "<<i<<" obtuvo "<<puntaje<<" puntos."<<endl;
    puntaje=0;
  }
  return 0;
}
