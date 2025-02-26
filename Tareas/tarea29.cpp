#include <iostream>
using namespace std;

void bubble(int a[], int n){
	int aux;
	for(int i=1; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(a[j]>a[j+1]){
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
	}
}

int main(){
	int n;
	cout<<"Cantidad de elementos del arreglo: "; cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cout<<"Elemento #"<<i+1<<": "; cin>>arr[i];
	}
	
	cout<<"Antes de la funcion: "<<endl;
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	
	bubble(arr,n);
	
	cout<<"Despues de la funcion: "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
\
