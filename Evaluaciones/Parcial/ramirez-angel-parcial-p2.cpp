#include <iostream>

using namespace std;

int main() {
    string oracion;
    cout << "Ingrese la oracion: ";
    getline(cin, oracion);

    int cant = 0;
    float num=0.0, suma = 0.0, factDec=1.0;
    bool leeNum = false;
    bool esDec = false;

    int i = 0;
    while (oracion[i] != '\0') {
        char c = oracion[i];
        
        if (c >= '0' && c <= '9') { 
            if (!leeNum) {
                num = 0.0;
                factDec = 1.0;
                esDec = false;
                leeNum = true;
            }
            if (esDec) {
                factDec /= 10;
                num += (c - '0') * factDec;
            } else {
                num = num * 10 + (c - '0');
            }
        } else if (c == '.' && leeNum) {
            esDec = true;
        } else {
            if (leeNum) {
                suma += num;
                cant++;
                leeNum = false;
            }
        }
        i++;
    }

    if (leeNum) {
        suma += num;
        cant++;
    }
    
    if (cant > 0) {
        float prom = suma / cant;
        cout << "El promedio es " << prom << endl;
    } else {
        cout << "No se encontraron numeros en la oracion." << endl;
    }

    return 0;
}
