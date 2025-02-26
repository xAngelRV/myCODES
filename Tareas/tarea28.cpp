#include <iostream>
using namespace std;

int vAbs(int n){
	if(n<0) return -n;
	else return n;
}

int modo(int a[][100], int n, int m){
	int suma, sumaMax=0;
	for(int i=0; i<n; i++){
		suma=0;
		for(int j=0; j<m; j++){
			suma+=a[i][j];
		}
		suma=vAbs(suma);
		if(suma>sumaMax){
			sumaMax=suma;
		}
	}
	return sumaMax;
}

int main(){
	
	int n, m;
	cout<<"Ingrese n: "; cin>>n;
	cout<<"Ingrese m: "; cin>>m;
	
	int matr[n][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"Ingrese "<<i+1<<j+1<<": "; cin>>matr[i][j];
		}
	}
	
	cout<<"El MODO de la matriz es "<<modo(matr,n,m)<<endl;
	
	return 0;
}
