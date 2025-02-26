#include <iostream>
using namespace std;

int main(){
	
	char oracion[100];
	cout<<"Ingrese la oracion: "<<endl;
	cin.getline(oracion,100);
	
	int med;
	cout<<"Ingrese la longitud buscada: "; cin>>med;
	
	int i=0, cont=0;
	while(oracion[i]!='\0'){
		while(oracion[i]==' '){
			i++;
		}
		if(oracion[i]=='\0') break;
		
		int j=i;
		while(oracion[j]!=' ' && oracion[j]!= '\0'){
			j++;
		}
		
		if(j-i==med){
			cont++;
		}
		i=j;
	}
	
	cout<<"En la oracion - "<<oracion<<"- hay "<<cont<<" palabras con "<<med<<" caracteres."; 
	
	return 0;
}
