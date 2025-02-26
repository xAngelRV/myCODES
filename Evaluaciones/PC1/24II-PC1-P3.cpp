#include <iostream>
using namespace std;

int main(){
	
	int n;
	do{
		cout<<"Ingrese la cantidad de estudiantes (n): "; cin>>n;
	}while(n<=0 || n>=8);
	
	int code, nota, varCtr=0;
	for(int i=0; i<n; i++){
		cout<<"--ESTUDIANTE #"<<i+1<<"--"<<endl;
		cout<<"Codigo: "; cin>>code;
		cout<<"Nota: "; cin>>nota;
		
		int cont=0, cifElim, cif, ctr=0;
		while(nota!=0){
			cifElim=nota%10;
			int inv=0;
			
			//Eliminar
			while(code!=0){
				cif=code%10;
				if(cif!=cifElim) inv=inv*10+cif;
				code/=10;
			}
			
			//Invertir
			while(inv!=0){
				cif=inv%10;
				ctr=ctr*10+cif;
				inv/=10;
			}
			nota/=10;
		}
		
		int contCif=0;
		while(ctr!=0){
			ctr/=10;
			contCif++;
		}
		
		varCtr=varCtr*10+contCif;
		
	}
	
	cout<<"Variable control: "<<varCtr<<endl;
	
	return 0;
}
