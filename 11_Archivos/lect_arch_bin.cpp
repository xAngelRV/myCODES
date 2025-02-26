#include <iostream>
#include <fstream>
using namespace std;

int main(){
	struct reg_agenda{
		char nombre[30], direccion[50], telefono[10];
	} ragenda{};

	int i=1;
	ifstream archi("Agenda.dat", ios::in|ios::binary);//especificar que es binario(sino asumira que es txt)
	while (!archi.eof()){
		archi.read(reinterpret_cast<char *>(&ragenda), sizeof(reg_agenda));
		if(!archi.fail()){
			cout<<"Registro#"<<i<<endl;
			cout<<"Nombre: "<<ragenda.nombre<<endl;
			cout<<"Direccion: "<<ragenda.direccion<<endl;
			cout<<"Telefono: "<<ragenda.telefono<<endl;
			cout<<endl;
		}
		i++;
	}
	archi.close();
	
	return 0;
}
