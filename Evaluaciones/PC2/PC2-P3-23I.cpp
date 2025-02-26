#include <iostream>
using namespace std;

int main() {
    // Leer primer número (A)
    int numA;
    do {
        cout << "Ingrese el primer numero (A): "; 
        cin >> numA;
    } while (numA <= 0);
    
    // Calcular la cantidad de dígitos en numA
    int num = numA, cifsA = 0;
    while (num != 0) {
        cifsA++;
        num /= 10;
    }
    
    // Verifica que cifsA no sea cero (esto evitaría crear un arreglo de tamaño 0)
    if (cifsA == 0) cifsA = 1;
    
    int A[cifsA];  // Arreglo para almacenar los dígitos de A
    
    // Llenar el arreglo A con los dígitos de numA
    int i = cifsA - 1;
    while (numA != 0) {
        A[i] = numA % 10;
        numA /= 10;
        i--;
    }

    // Imprimir los dígitos de A
    for (int i = 0; i < cifsA; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    // Leer segundo número (B)
    int numB;
    do {
        cout << "Ingrese el segundo numero (B): "; 
        cin >> numB;
    } while (numB <= 0);
    
    // Calcular la cantidad de dígitos en numB
    num = numB;
    int cifsB = 0;
    while (num != 0) {
        cifsB++;
        num /= 10;
    }
    
    // Verifica que cifsB no sea cero
    if (cifsB == 0) cifsB = 1;
    
    int B[cifsB];  // Arreglo para almacenar los dígitos de B
    
    // Llenar el arreglo B con los dígitos de numB
    i = cifsB - 1;
    while (numB != 0) {
        B[i] = numB % 10;
        numB /= 10;
        i--;
    }

    // Imprimir los dígitos de B
    for (int i = 0; i < cifsB; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}

