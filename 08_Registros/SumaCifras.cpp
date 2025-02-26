#include <iostream>
using namespace std;

int main(){
	
	char numReal[100];
	int i=0, digito, suma=0, digcero='0';
	cout<<"Ingrese el numero real: "; cin.getline(numReal,100);
	
	while(numReal[i]!='\0'){

			digito=numReal[i];
			suma=suma+(digito-digcero);

		i++;
	}
	
	cout<<"La suma de los digitos es "<<suma<<endl;
	
	return 0;
}
