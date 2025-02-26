#include <iostream>
using namespace std;

int main() {
    // Leer primer n�mero (A)
    int numA;
    do {
        cout << "Ingrese el primer numero (A): "; 
        cin >> numA;
    } while (numA <= 0);
    
    // Calcular la cantidad de d�gitos en numA
    int num = numA, cifsA = 0;
    while (num != 0) {
        cifsA++;
        num /= 10;
    }
    
    // Verifica que cifsA no sea cero (esto evitar�a crear un arreglo de tama�o 0)
    if (cifsA == 0) cifsA = 1;
    
    int A[cifsA];  // Arreglo para almacenar los d�gitos de A
    
    // Llenar el arreglo A con los d�gitos de numA
    int i = cifsA - 1;
    while (numA != 0) {
        A[i] = numA % 10;
        numA /= 10;
        i--;
    }

    // Imprimir los d�gitos de A
    for (int i = 0; i < cifsA; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    // Leer segundo n�mero (B)
    int numB;
    do {
        cout << "Ingrese el segundo numero (B): "; 
        cin >> numB;
    } while (numB <= 0);
    
    // Calcular la cantidad de d�gitos en numB
    num = numB;
    int cifsB = 0;
    while (num != 0) {
        cifsB++;
        num /= 10;
    }
    
    // Verifica que cifsB no sea cero
    if (cifsB == 0) cifsB = 1;
    
    int B[cifsB];  // Arreglo para almacenar los d�gitos de B
    
    // Llenar el arreglo B con los d�gitos de numB
    i = cifsB - 1;
    while (numB != 0) {
        B[i] = numB % 10;
        numB /= 10;
        i--;
    }

    // Imprimir los d�gitos de B
    for (int i = 0; i < cifsB; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}

