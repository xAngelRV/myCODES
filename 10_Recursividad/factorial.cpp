#include <iostream>
using namespace std;

long factorial(int n){
  long f=1;
  if(n>0){
    f=n*factorial(n-1);
  }
  return f;
}

int main(){
  int num;
  cout<<"Ingrese el numero: ";
  cin>>num;
  cout<<"Factorial: "<<factorial(num)<<endl;
}