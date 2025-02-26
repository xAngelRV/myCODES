#include <iostream>
using namespace std;

long fibonacci(int n) {
  long f=1;
  if (n>2) {
    f=fibonacci(n-1)+fibonacci(n-2);
  }
  return f;
}

int main(){
  int n, m;
  cout<<"Ingrese un entero positivo n: ";
  cin>>n;

  cout<<"El numero de fibonacci en la posicion "<<n<<" es: "<<fibonacci(n)<<endl;


  return 0;
}