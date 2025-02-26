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

  //ELIMINAR primer nodo
  pactual=pinicio; //pactual apunta al nodo inicial
  if(pinicio!=NULL){
    pactual=pactual->psigue; //pactual apunta al nodo siguiente
    delete pinicio; //se libera el espacio de memoria apuntado por pinicio
    pinicio=pactual;
  }

  //recorrido de la lista creada
  pactual=pinicio;//Apunta con el puntero actual al nodo inicial de la lista
  while(pactual!=NULL){
    cout<<pactual->numero<<endl;//Muestra el contenido del nodo
    pactual=pactual->psigue;//Apunta la siguiente nodo de la lista
  }

  return 0;
}