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
    //insertar al inicio
  } else{
    while(!insertado && pactual!=NULL){
      if(i<=pactual->numero){
        pantes->psigue=new reg_nodo;
        pantes->psigue->numero=i;
        pantes->psigue->psigue=pactual;
        insertado=true;
      }
      if(!insertado && pactual->psigue==NULL){
        //insetar al final
      }
      pantes=pactual;
      pactual=pactual->psigue;
    }
  }

  //recorrido de la lista creada
  pactual=pinicio;//Apunta con el puntero actual al nodo inicial de la lista
  while(pactual!=NULL){
    cout<<pactual->numero<<endl;//Muestra el contenido del nodo
    pactual=pactual->psigue;//Apunta la siguiente nodo de la lista
  }

  return 0;
}