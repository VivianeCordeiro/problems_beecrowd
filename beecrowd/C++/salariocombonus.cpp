#include <iostream>
#include <cmath>


using namespace std;

int main(){
	string nome;
	float salario, vendas, total;
	cin >> nome;
	cin >> salario >> vendas;
	total = ceil((salario+(0.15*vendas))*100)/100;
	
	printf("TOTAL = R$ %.2f", total);
	cout << endl; 
	
return 0;
}