#include <iostream>
using namespace std;

int main(){
	
	int n;
	do{
		cout<<"Ingrese el orden de la matriz(n): "; cin>>n;
		if(n<5 || n%2==0) cout<<"Valor invalido"<<endl;
	} while(n<5 || n%2==0);
	
	int arr[n][n], suma=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"Ingrese el valor de #"<<i+1<<j+1<<": "; cin>>arr[i][j];
			if(i==j || i+j==n-1) suma=suma+arr[i][j];
		}
	}
	
	cout<<"La suma de los elementos pertenecientes a las diagonales principales es "<<suma<<endl;
	
	return 0;
}
