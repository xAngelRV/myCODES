#include <iostream>
using namespace std;

int main(){
	
	int n;
	do{
		cout<<"Ingrese la cantidad de numeros (n): "; cin>>n;
	}while(n>50);
	
	int num[n];
	for(int i=0; i<n; i++){
		do{
			cout<<"Ingrese #"<<i+1<<": "; cin>>num[i];
		}while(num[i]<10 || num[i]>999);
	}
	
	//Eliminar primos
	for(int i=0; i<n; i++){
		bool esPrimo=true;
		//es primo?
		for(int k=2; k*k<=num[i]; k++){
			if(num[i]%k==0){
				esPrimo=false;
				break;
			}
		}
		if(esPrimo){
			//Eliminacion
			for(int j=i; j<n-1; j++){
				num[j]=num[j+1];
			}
			n--;
			i--;
		}	
	}
	
	/*
	for(int i=0; i<n; i++){
		cout<<num[i]<<endl;
	}
	*/
	
	//Duplicado de los capicuas
	for(int i=0; i<n; i++){
		//es capicua?
		int aux=num[i];
		int cif, inv=0;
		while(aux!=0){
			cif=aux%10;
			inv=(inv*10)+cif;
			aux/=10;
		}
		//duplicar
		if(inv==num[i]){			
			for(int j=n; j>i; j--){
				num[j]=num[j-1];
			}
			num[i+1]=num[i];
			n++;
			i++;
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<num[i]<<" ";
	}
	
	return 0;
}
