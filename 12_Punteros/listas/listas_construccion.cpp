//CONSTRUCCION DE UNA LISTA
#include <iostream>
using namespace std;

int main(){

  struct reg_nodo{ //declaracion de nodos
    int numero;
    reg_nodo *psigue;//puntero a reg_nodo(el nodo apuntara a otro nodo)
  } *pinicio, *pactual, *pantes, *paux; //punteros a nodo de la lista

  pinicio=NULL;

  int x[5]={1,2,3,4,5}, i=0;

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

  /* NOTA:
 * int *p apunta a enteros y su contenido es *p
* pero con registros como reg_nodo{
* int numero;
* char wa;
* } *pinicio;   su contenido es pincio->numero
 * */

  return 0;
}