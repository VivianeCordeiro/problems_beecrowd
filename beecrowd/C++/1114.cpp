#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	while(N!=2002){
		cout << "Senha Invalida" << endl;
		cin >> N;
	}
	cout << "Acesso Permitido" << endl;	

	return 0;
}