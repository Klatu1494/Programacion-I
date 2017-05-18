#include <iostream>

using namespace std;

float celsiusAFahrenheit(float celsius){
  return celsius*9/5+32;
}

int main(){
  float celsius=0;
  cout<<"Ingrese una temperatura en grados centigrados: ";
  cin>>celsius;
  cout<<"Esa temperatura equivale a "<<celsiusAFahrenheit(celsius);
  cout<<" grados Fahrenheit.";
  return 0;
}
