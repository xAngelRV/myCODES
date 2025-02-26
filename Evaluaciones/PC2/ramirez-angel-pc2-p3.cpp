#include <iostream>
using namespace std;

int main() {
	//pido A
    int numA;
    do {
        cout << "Ingrese el primer numero (A): "; 
        cin >> numA;
    } while (numA <= 0);
    
    //cifras A
    int num = numA, cifsA = 0;
    while (num != 0) {
        cifsA++;
        num /= 10;
    }
    
    //arreglo A
    int A[cifsA];
    int i = cifsA - 1;
    while (numA != 0) {
        A[i] = numA % 10;
        numA /= 10;
        i--;
    }
    
    //pido B
    int numB;
    do {
        cout << "Ingrese el segundo numero (B): "; 
        cin >> numB;
    } while (numB <= 0);
    
    //cifras B
    num = numB;
    int cifsB = 0;
    while (num != 0) {
        cifsB++;
        num /= 10;
    }
    
    //arreglo B
    int B[cifsB];
    i = cifsB - 1;
    while (numB != 0) {
        B[i] = numB % 10;
        numB /= 10;
        i--;
    }
    
    //producto
    int prod[cifsA + cifsB] = {0};
    
    for (int i = cifsA - 1; i >= 0; i--) {
        for (int j = cifsB - 1; j >= 0; j--) {
            int mul = A[i] * B[j];
            int pos1 = i + j;
            int pos2 = i + j + 1;
            
            int sum = mul + prod[pos2];
            prod[pos2] = sum % 10;
            prod[pos1] += sum / 10;
        }
    }
    
    //salidad
    cout << "Producto: ";
    bool llevaCero= true;
    for (int i = 0; i < cifsA + cifsB; i++) {
        if (prod[i] != 0) {
            llevaCero = false;
        }
        if (!llevaCero) {
            cout << prod[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}
