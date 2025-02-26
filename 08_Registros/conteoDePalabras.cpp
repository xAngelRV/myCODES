#include <iostream>
using namespace std;

int main(){

    char oracion[100];
    int cont=1;

    cout<<"Ingrese una oracion: "; cin.getline(oracion,100);

    int i=0;
    while(oracion[i]!='\0'){
        /*Forma 1(Termina una palabra):
        if(oracion[i]!=' ' && oracion[i+1]==' ') cont++;
        i++;*/

        //Forma 2(Inicia una palabra):
        if(oracion[i]!=' ' && oracion[i-1]==' ') cont ++;
        i++;
    }

    cout<<"La oracion '"<<oracion<<"' tiene "<<cont<<" caracteres";


    return 0;
}