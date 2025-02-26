#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char resp;
	struct reg_agenda{
		char nombre[30], direccion[50], telefono[10];
	} ragenda;

	int i=1;
	ofstream archi("Agenda.dat", ios::out|ios::binary);
	do{
		cout<<"REGISTRO #"<<i<<endl;
		cout<<"Ingrese nombre: "; gets(ragenda.nombre);
		cout<<"Ingrese direccion: "; gets(ragenda.direccion);
		cout<<"Ingrese telefono: "; gets(ragenda.telefono);
		archi.write(reinterpret_cast<char *>(&ragenda), sizeof(reg_agenda));
		cout<<"Agrega otro registro(S/N)?: ";
		cin>>resp; resp=toupper(resp);
		getchar();
		i++;
	}while(resp=='S');
	
	archi.close();
	
	return 0;
}
