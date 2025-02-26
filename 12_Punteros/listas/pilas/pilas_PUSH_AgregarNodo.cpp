#include <iostream>
using namespace std;

int main(){

  struct reg_nodo{ //declaracion de nodos
    int numero;
    reg_nodo *psigue;//puntero a reg_nodo(el nodo apuntara a otro nodo)
  } *pinicio, *pactual, *pantes, *paux; //punteros a nodo de la lista

  pinicio=NULL;

  int x[5]={10,20,30,40,50}, i=0;

  //agregar nodos a la lista con los valores de x
  while(i<5){
    if(pinicio==NULL){
      pinicio=new reg_nodo; //consigue un nuevo registro
      pactual=pinicio;
    } else{
      pactual->psigue=new reg_nodo;
      pactual=pactual->psigue;
    }
    pactual->numero=x[i];
    pactual->psigue=NULL;
    i++;
  }


  //PUSH agregar un nodo a la pila
  pactual=new reg_nodo;
  pactual->numero=num;
  if(pinicio==NULL){
    pinicio=pactual;
    pactual->psigue=NULL;
  } else {
    pactual->psigue=pactual;
    pinicio=pactual;
  }
  pactual=NULL;

  //recorrido de la lista creada
  pactual=pinicio;//Apunta con el puntero actual al nodo inicial de la lista
  while(pactual!=NULL){
    cout<<pactual->numero<<endl;//Muestra el contenido del nodo
    pactual=pactual->psigue;//Apunta la siguiente nodo de la lista
  }


  return 0;
}