#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cout << "Ingrese el primer numero: "; cin >> A;
    cout << "Ingrese el segundo numero: "; cin >> B;

    long long resultado = 0, factor = 1, acar = 0;

    while (A > 0 || B > 0 || acar > 0) {
        int cifA = A % 10;
        int cifB = B % 10;

        int suma = cifA + cifB + acar;
        int cifResultado = suma % 10;
        acar = suma / 10;

        resultado += cifResultado * factor;
        factor *= 10;

        A /= 10;
        B /= 10;
    }

    cout << "La suma es: " << resultado << endl;
    return 0;
}

