#include <iostream>
using namespace std;

int main() {
    int arr[4][20];
    int prof[4];


    for (int i = 0; i < 4; i++) {
        cout << "\t-SEDE #" << i + 1 << "-" << endl;
        do {
            cout << "Cantidad de profesores: ";
            cin >> prof[i];
            if(prof[i] <= 0 || prof[i] > 20) cout<<"Valor invalido (1-20)"<<endl;
        } while (prof[i] <= 0 || prof[i] > 20);

        for (int j = 0; j < prof[i]; j++) {
            do {
                cout << "Ingrese la especialidad del profesor #" << j + 1 << ": ";
                cin >> arr[i][j];
            	if(arr[i][j] < 10 || arr[i][j] >= 100) cout<<"Valor invalido (10-99)"<<endl;
            } while (arr[i][j] < 10 || arr[i][j] >= 100);
        }
    }
    cout<<endl;
    
    for (int i = 0; i < 4; i++) {
        cout << "\t-SEDE #" << i + 1 << "-" << endl;
        cout<<"Cantidad de profesores total: "<<prof[i]<<endl;

        int contador[100] = {0};
        for (int j = 0; j < prof[i]; j++) {
            contador[arr[i][j]]++;
        }


        cout << "Profesores por especialidad en SEDE #" << i + 1 << ":" << endl;
        for (int k = 10; k < 100; k++) {
            if (contador[k] > 0) {
                cout << "Especialidad " << k << ": " << contador[k] << " profesores" << endl;
            }
        }
        cout<<endl;
    }

    return 0;
}

