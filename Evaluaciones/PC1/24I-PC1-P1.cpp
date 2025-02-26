#include <iostream>
using namespace std;

int main(){
	
	int num;
	do{
		cout<<"Ingrese un numero (N): "; cin>>num;
	} while(num<10000 || 100000<num);
	
	int A=1, B=1, cif;
	int aux=num;
	for(int i=0; i<5; i++){
		if(i<2){
			cif=aux%10;
			B=B*cif;
			aux/=10;
		} else {
			cif=aux%10;
			A=A*cif;
			aux/=10;
		}
	}
	
	cout<<"N: "<<num<<endl;
	cout<<"A: "<<A<<endl;
	cout<<"B: "<<B<<endl;
	
	return 0;
}
