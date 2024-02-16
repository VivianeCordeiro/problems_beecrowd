#include <iostream>

using namespace std;

int main(){
	string linha;
	int N, operando1, operando2;
	cin >> N;
	while(N--){
		cin >> linha;
		if(!linha.compare("P=NP"))
		{
			cout << "skipped" << endl;
		}else{
			int operacao = linha.find("+");
			operando1 = stoi(linha.substr(0, operacao));
			operando2 = stoi(linha.substr(operacao, linha.size()));
			cout << operando1 + operando2 << endl;
		}
	}


	return 0;
}