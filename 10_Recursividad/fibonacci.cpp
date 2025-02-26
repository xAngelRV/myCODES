#include <iostream>
using namespace std;

int fibonacci(int n){
  long f=1;
  if(n>2){
    f=fibonacci(n-1)+fibonacci(n-2);
  }
  return f;
}

int main(){
  int n;
  cout<<"Ingrese un numero entero (n): ";
  cin>>n;
  cout<<"El numero de fibonacci en la posicion "<<n<<" es: "<<fibonacci(n)<<endl;
}