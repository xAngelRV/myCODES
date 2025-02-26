//INSERTAR ANTES DEL PRIMER NODO DE UNA LISTA
#include <iostream>
using namespace std;

int main(){

  struct reg_nodo{
    int numero;
    reg_nodo *psigue;
  } *pinicio, *pactual, *pantes, *paux;

  pinicio=NULL;

  int x[5]={10,20,30,40,50}, i=0;

  while(i<5){
    if(pinicio==NULL){
      pinicio=new reg_nodo;
      pactual=pinicio;
    } else{
      pactual->psigue=new reg_nodo;
      pactual=pactual->psigue;
    }
    pactual->numero=x[i];
    pactual->psigue=NULL;
    i++;
  }

  //INSERTAR UN VALOR EN UNA LISTA ORDENADA
  bool insertado=false;
  pactual=pinicio;
  cout<<"Ingrese el numero a insertar: ";
  cin>>i;
  if(i<=pinicio->numero){
    pinicio=new reg_nodo;
    pinicio->psigue=pactual;
    pinicio->numero=i;
    insertado=true;
  } else {
    //insertar entre o al final
  }

  return 0;
}