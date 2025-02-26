#include <iostream>
using namespace std;

int main() {
	
    string oracion, word, temp;
    int cont = 0, i = 0;


    cout << "Ingrese una oracion: ";
    getline(cin, oracion);


    cout << "Ingrese la palabra a buscar: ";
    cin >> word;

    oracion += ' ';
    

    while (oracion[i]) {
        if (oracion[i] == ' ') { 
            if (temp == word) {
                cont++;
            }
            temp = "";
        } else {
            temp += oracion[i];
        }
        i++;
    }


    cout << "La palabra '" << word << "' aparece " << cont << " veces en la oracion";

    return 0;
}


