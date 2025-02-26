#include <iostream>
using namespace std;

int main(){

  string oracion;

  cout<<"Ingrese una cadena de texto: "; getline(cin, oracion);

  int i=0, cont=0;
  while(oracion!='\0'){
    if (oracion[i]==" " || oracion[i]=='\0') cont++;
  }


  return 0;
}
