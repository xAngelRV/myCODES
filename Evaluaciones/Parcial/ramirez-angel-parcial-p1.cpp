#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de registros(n): ";
    cin >> n;

    struct reg_encuesta {
        string bebida;
        char sex;
        char nivel;
    } lista[n];

    int total[4] = {0};
    int cont[4][3][2] = {};


    for (int i = 0; i < n; i++) {
        cout << "Ingrese bebida (Gaseosa, Cerveza, Nectar, Agua): ";
        cin >> lista[i].bebida;
        cout << "Ingrese nivel socioeconomico (A/B/C): ";
        cin >> lista[i].nivel;
        cout << "Ingrese sexo (M/F): ";
        cin >> lista[i].sex;

        int bInd = 0;
        if (lista[i].bebida == "Cerveza") {
            bInd = 1;
        } else if (lista[i].bebida == "Nectar") {
            bInd = 2;
        } else if (lista[i].bebida == "Agua") {
            bInd = 3;
        }


        int nInd;
        switch (lista[i].nivel) {
            case 'A': nInd = 0; break;
            case 'B': nInd = 1; break;
            case 'C': nInd = 2; break;
        }


        int sInd;
        switch (lista[i].sex) {
            case 'M': sInd = 0; break;
            case 'F': sInd = 1; break;
        }


        cont[bInd][nInd][sInd]++;
        total[bInd]++;
    }


    int aux[4] = {0, 1, 2, 3};
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (total[aux[j]] > total[aux[i]]) {
                int temp = aux[i];
                aux[i] = aux[j];
                aux[j] = temp;
            }
        }
    }
    
    string bebidas[4] = {"Gaseosa", "Cerveza", "Nectar", "Agua"};

    for (int b = 0; b < 4; b++) {
        int bebidaInd = aux[b];
        if (total[bebidaInd] > 0) { 
        	cout<<endl;
            cout << bebidas[bebidaInd] << endl;
            cout << "Nivel Socioeconomico  Sexo  Preferencia (%)" << endl;

            for (int n = 0; n < 3; n++) {
                for (int s = 0; s < 2; s++) {
                    if (cont[bebidaInd][n][s] > 0) {
                        char nivel;
                        switch (n) {
                            case 0: nivel = 'A'; break;
                            case 1: nivel = 'B'; break;
                            case 2: nivel = 'C'; break;
                        }

                        char sexo;
                        switch (s) {
                            case 0: sexo = 'M'; break;
                            case 1: sexo = 'F'; break;
                        }

                        double pctj = (cont[bebidaInd][n][s] * 100.0) / total[bebidaInd];

                        cout << "        " << nivel << "              " << sexo << "      " << pctj << " %" << endl;
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}

