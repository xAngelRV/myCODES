//RECORRIDO DE UNA LISTA
#include <iostream>
using namespace std;

int main(){

  struct reg_nodo{
    int numero;
    reg_nodo *psigue;
  } *pinicio, *pactual, *pantes, *paux;

  pinicio=NULL;

  int x[5]={1,2,3,4,5}, i=0;

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

  //recorrido de la lista creada
  pactual=pinicio;//Apunta con el puntero actual al nodo inicial de la lista
  while(pactual!=NULL){
    cout<<pactual->numero<<endl;//Muestra el contenido del nodo
    pactual=pactual->psigue;//Apunta la siguiente nodo de la lista
  }

  return 0;
}