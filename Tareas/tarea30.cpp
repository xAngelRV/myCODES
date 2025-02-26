#include <iostream>
using namespace std;

long multi(int a, int b){
  long m=0;
  if(b>0){
    m=a+multi(a,b-1);
  }
  return m;
}

int main(){
  int n1, n2;


  do {
    cout<<"Ingrese primer numero: ";
    cin>>n1;
    if (n1<0) cout<<"Valor invalido \n";
  } while (n1<0);

  do {
    cout<<"Ingrese segundo numero: ";
    cin>>n2;
    if (n2<0) cout<<"Valor invalido \n";
  } while (n2<0);

  cout<<"Producto: "<<multi(n1,n2)<<endl;


  return 0;
}