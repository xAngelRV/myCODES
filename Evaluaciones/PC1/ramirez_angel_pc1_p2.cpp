#include <iostream>
using namespace std;

int main(){
	
	int D1, D2, f1, f2, c1, c2;
	do{
		cout<<"Posicion Dama1: "; cin>>D1;
		if(D1<11||D1>88) cout<<"Valor Invalido"<<endl;
	} while(D1<11||D1>88);
	
	do{
		cout<<"Posicion Dama2: "; cin>>D2;
		if(D2<11||D2>88) cout<<"Valor Invalido"<<endl;
		if(D1==D2) cout<<"Ambas damas no pueden tener la misma posicion."<<endl;
	} while(D2<11||D2>88||D1==D2);
	
	c1=D1%10;
	D1/=10;
	f1=D1%10;
	
	c2=D2%10;
	D2/=10;
	f2=D2%10;
	int aux1=c1-f1;
	int aux2=c2-f2;
	
	if(c1==c2){
		cout<<"Las Damas se atacan";
	} else{
		if(f1==f2){
			cout<<"Las Damas se atacan";
		} else{
			if(aux1==aux2){
				cout<<"Las Damas se atacan";
			} else {
				cout<<"Las Damas no se atacan";
			}
		}
	}


	return 0;
}
