#include <iostream>

using namespace std;

int main(){
	int codigo, codigo1=0, codigo2=0, codigo3=0;
	while(codigo != 4){
		cin >> codigo;
		if(codigo == 1){
			codigo1++;
		}
		if(codigo == 2){
			codigo2++;
		}
		if(codigo == 3){
			codigo3++;
		}

	}
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << codigo1 << endl;
	cout << "Gasolina: " << codigo2 << endl;
	cout << "Diesel: " << codigo3 << endl;

	return 0;
}