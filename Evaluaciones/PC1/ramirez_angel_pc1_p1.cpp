#include <iostream>
using namespace std;

int main(){
	
	int A, B;
	long long C=0;
	do{
		cout<<"Ingrese A: "; cin>>A;
	}while(A<1000||A>9999999999);
	
	do{
		cout<<"Ingrese B: "; cin>>B;
	}while(B<1000||B>9999999999);
	
	int cif;
	while(A!=0){
		cif=A%10;
		if(cif%2!=0) {
			C=C*10+cif;
		}
		A/=10;
	}
	
	//Ordenar por ocurrencia
	long long aux=C;
	while(aux!=0){
		cif=aux%10;
		if(contMax<cont) 
		
	}
	
	long long aux;
	int contMax=0, cont=0;
	long long aux2=0;
	for(int i=9;i>=0;i--){
		if(i%2!=0){
			aux=C;
			while(aux!=0){
				cif=aux%10;
				if(aux==i){
					cont++;
					aux2=aux2*10+i;
				}
				aux/=10;
			}
		}
	}
	cout<<aux2<<endl;
	
	while(B!=0){
		cif=B%10;
		if(cif%2==0) {
			C=C*10+cif;
		}
		B/=10;
	}
	
	cout<<C;
		
	return 0;
}
