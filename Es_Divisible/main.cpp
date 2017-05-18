#include <iostream>

using namespace std;

bool esDivisible(int a, int b){
  if(b==0){
    return false;
  }
  return a%b==0;
}

int main(){
  int x=0;
  int y=0;
  cout<<"Ingrese un entero: ";
  cin>>x;
  cout<<"Ingrese otro entero: ";
  cin>>y;
  cout<<x;
  if(!esDivisible(x, y)){
    cout<<" no";
  }
  cout<<" es divisible por "<<y<<".";
  return 0;
}
