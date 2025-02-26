#include <iostream>
using namespace std;

int main() {
    int n, num;
    
    do {
        cout << "Ingrese la cantidad de numeros (n): ";
        cin >> n;
    } while (n <= 0);
    
    int max1, max2, min1, min2;
    
    cout << "Ingrese el #1: ";
    cin >> num;
    max1 = min1 = num;
    
    max2 = min2 = num;
    bool SegundoMax = false, SegundoMin = false;

    for (int i = 1; i < n; i++) {
        cout << "Ingrese el #" << i + 1 << ": ";
        cin >> num;
        
        if (num > max1) {
            max2 = max1;
            max1 = num;
            SegundoMax = true;
        } else if (num > max2 || !SegundoMax) {
            max2 = num;
            SegundoMax = true;
        }
        
        if (num < min1) {
            min2 = min1;
            min1 = num;
            SegundoMin = true;
        } else if (num < min2 || !SegundoMin) {
            min2 = num;
            SegundoMin = true;
        }
    }
    
    cout << "Los dos valores mayores son " << max1;
    if (SegundoMax) cout << " y " << max2;
    cout << endl;

    cout << "Los dos valores menores son " << min1;
    if (SegundoMin) cout << " y " << min2;
    cout << endl;
    
    return 0;
}

