#include <iostream>
using namespace std;

int main(){
	
	int num;
	do{
		cout<<"Ingrese N: "; cin>>num;
	}while(num<1000);
	
	int suma=0, cif, cantCif=0, prom;
	int aux=num;
	while(aux!=0){
		cif=aux%10;
		suma=suma+cif;
		cantCif++;
		aux/=10;
	}
	
	prom=suma/cantCif;
	
	//Eliminar
	int inv=0;
	while(num!=0){
		cif=num%10;
		if(cif!=prom) inv=inv*10+cif;
		num/=10;
	}
	
	//Invertir
	int aux1=0;
	while(inv!=0){
		cif=inv%10;
		aux1=aux1*10+cif;
		inv/=10;
	}
	
	cout<<"Digito a eliminar(Promedio): "<<prom<<endl;
	cout<<"Numero modificado: "<<aux1<<endl;
	
	return 0;
}
