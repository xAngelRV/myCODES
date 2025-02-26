#include <iostream>
using namespace std;

int main(){
	
	int num, aux;
	do{
		cout<<"Ingrese N: "; cin>>num;	
	} while(!(9999<num));
	
	int cif, aux2=0;

	for(int i=9;i>=0; i--){
		aux=num;
		while(aux!=0){
			cif=aux%10;
			if(cif==i){
				aux2=aux2*10+cif;
			}
			aux=aux/10;
		}
	}
	
	cout<<aux2<<endl;
	
	return 0;
}

/*
i=9
num=182939
aux=0
cif=1
aux2=99

*/
	
	
