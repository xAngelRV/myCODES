#include <iostream>

using namespace std;

int main() {
    int sdk[9][9] = {0};

    int i, j;
    cout << "Valores de las casillas (Ingrese 0 en fila y columna para salir)"<<endl;

    while (true) {
        do {
            cout << "Fila (1-9): ";
            cin >> i;
            if (i < 0 || i > 9) cout << "Casilla invalida"<<endl;
        } while (i < 0 || i > 9);

        do {
            cout << "Columna (1-9): ";
            cin >> j;
            if (j < 0 || j > 9) cout << "Casilla invalida"<<endl;
        } while (j < 0 || j > 9);

        if (i == 0 || j == 0) break;

        cout << "Casilla [" << i << "][" << j << "] = ";
        cin >> sdk[i - 1][j - 1];
        cout << endl;
    }


    int m, n;
    cout << "- Coordenadas del casillero a buscar -"<<endl;
	    
    do{
    	do {
			cout << "Fila (1-9): ";
        	cin >> m;
        	if (m < 1 || m > 9) cout << "Casilla invalida"<<endl;
   		} while (m < 1 || m > 9);

    	do {
        	cout << "Columna (1-9): ";
        	cin >> n;
        	if (n < 1 || n > 9) cout << "Casilla invalida"<<endl;
    	} while (n < 1 || n > 9);
    	
  		m--;
    	n--;
    	
    	if (sdk[m][n] != 0) {
     	   cout << "Debe ingresar las coordenadas de un casillero vacio"<<endl;
		}	
	}while(sdk[m][n] != 0);


    bool posibles[10] = {false};


    for (int k=0; k<9; k++) {
        if (sdk[m][k] != 0) posibles[sdk[m][k]] = true;
        if (sdk[k][n] != 0) posibles[sdk[k][n]] = true;
    }


    int auxF=(m/3)*3;
    int auxC=(n/3)*3;
    for (int i=auxF; i<auxF+3; i++) {
        for (int j=auxC; j<auxC+3; j++) {
            if (sdk[i][j] != 0) posibles[sdk[i][j]] = true;
        }
    }

    cout << "Los valores posibles son: ";
    bool primero = true;
    for (int num = 1; num <= 9; num++) {
        if (!posibles[num]) {
            if (!primero) cout << ", ";
            cout << num;
            primero = false;
        }
    }
    cout << endl;

    return 0;
}
