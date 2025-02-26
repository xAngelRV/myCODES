#include <iostream>
using namespace std;

bool bisiesto(int anio) {
    if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) {
        return true;
    }
    return false;
}

int diasDelMes(int mes, int anio) {
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }
    if (mes == 2) {
        if (bisiesto(anio)) {
            return 29;
        }
        return 28;
    }
    return 31;
}

int diasEntreFechas(int d1, int m1, int a1, int d2, int m2, int a2) {
    int dias = 0;

    if (a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2)) {
        int temp;
        temp = d1; d1 = d2; d2 = temp;
        temp = m1; m1 = m2; m2 = temp;
        temp = a1; a1 = a2; a2 = temp;
    }

    if (a1 == a2 && m1 == m2) {
        return d2 - d1;
    }

    dias += diasDelMes(m1, a1) - d1;

    for (int i = m1 + 1; i <= 12; i++) {
        dias += diasDelMes(i, a1);
    }

    for (int i = a1 + 1; i < a2; i++) {
        dias += (bisiesto(i) ? 366 : 365);
    }

    for (int i = 1; i < m2; i++) {
        dias += diasDelMes(i, a2);
    }

    dias += d2;

    return dias;
}

int main() {
    int dia1, mes1, anio1;
    int dia2, mes2, anio2;

    cout << "FECHA #1" << endl;
    cout << "Dia 1: ";
    cin >> dia1;
    cout << "Mes 1: ";
    cin >> mes1;
    cout << "Anio 1: ";
    cin >> anio1;

    cout << endl;

    cout << "FECHA #2" << endl;
    cout << "Dia 2: ";
    cin >> dia2;
    cout << "Mes 2: ";
    cin >> mes2;
    cout << "Anio 2: ";
    cin >> anio2;

    int diasDif = diasEntreFechas(dia1, mes1, anio1, dia2, mes2, anio2);

    cout << "Dias transcurridos entre las fechas: " << diasDif << endl;

    return 0;
}



