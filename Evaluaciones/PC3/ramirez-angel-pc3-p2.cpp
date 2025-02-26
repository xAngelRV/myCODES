#include <iostream>
using namespace std;

// Ordenamos
void bubble(int a[], int n) {
	int aux;
	for (int i=1; i<n; i++) {
		for (int j=0; j<n-i; j++) {
			if (a[j] > a[j + 1]) {
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
		}
	}
}

// Hallamos mediana
float mediana(int a[], int n) {
	float med;
	bubble(a,n);
	if (n%2==0) {
		med=(a[n/2]+a[(n/2)-1])/2.0;
	} else {
		med=a[(n-1)/2];
	}
	return med;
}

int main() {
	int m;
	float promMed=0;

	cout<<"Cantidad de listas: ";
	cin>>m;

	struct reg_med {
		int n;
		int arr[100];
		float med;
	} lista[m];

	for (int i = 0; i < m; i++) {
		cout << "-LISTA " << i + 1 << "-" << endl;
		cout << "Cantidad de elementos #" << i + 1 << ": ";
		cin >> lista[i].n;
		for (int j = 0; j < lista[i].n; j++) {
			cout << "Elemento #" << j + 1 << ": ";
			cin >> lista[i].arr[j];
		}
		lista[i].med = mediana(lista[i].arr, lista[i].n);
		promMed += lista[i].med;
	}

	promMed/=m;

	cout << "Promedio de las medianas es " << promMed << endl;

	return 0;
}

