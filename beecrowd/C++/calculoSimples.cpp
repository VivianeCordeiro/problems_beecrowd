#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int codigo, quantidade;
	float valor, total;
	cin >> codigo >> quantidade >> valor;
	total = quantidade*valor;
	cin >> codigo >> quantidade >> valor;
	total = total + (quantidade*valor);
	printf("VALOR A PAGAR: R$ %.2f", total);
	cout << endl;

return 0;
}

