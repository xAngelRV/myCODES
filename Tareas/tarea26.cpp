#include <iostream>
using namespace std;

bool bisiesto(int ano){
	if(ano%4==0 && ano%100!=0 || ano%400==0){
		return true;
	} else {
		return false;
	}
}

int main(){
	
	int dia, mes, ano;
	cout<<"Ingrese dia: "; cin>>dia;
	cout<<"Ingrese mes: "; cin>>mes;
	cout<<"Ingrese anio: "; cin>>ano;
	
	if(mes==4||mes==6||mes==9||mes==11){
		if(dia<30){
			dia++;
		}else{
			dia=1;
			mes++;
		}
	}
	else{
		if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
			if(dia<31){
				dia++;
			}else{
				dia=1;
				if(mes<12){
					mes++;
				}else{
					mes=1;
					ano++;
				}
			}
		}
		else{
			if(dia<28){
				dia++;
			}else{
				if(dia==28){
					if(bisiesto(ano)){
						dia++;
					}else{
						dia=1;
						mes=3;
					}
				}else {
					dia=1;
					mes=3;
				}
			}
		}
	}
	
	cout<<"Dia siguiente: "<<dia<<"/"<<mes<<"/"<<ano;
	return 0;
}
