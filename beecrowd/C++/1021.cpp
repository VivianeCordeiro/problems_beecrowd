#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	double N, resto;
	int notas;
	cin >> N;
	
	cout << "NOTAS:" << endl;
	
	notas = N/100.0;
	printf("%d nota(s) de R$ 100.00\n", notas);
	resto = N-(notas*100);

	notas = resto/50.0;
	printf("%d nota(s) de R$ 50.00\n", notas);
	resto = resto-(notas*50);

	notas = resto/20.0;
	printf("%d nota(s) de R$ 20.00\n", notas);
	resto = resto-(notas*20);

	notas = resto/10.0;
	printf("%d nota(s) de R$ 10.00\n", notas);
	resto = resto-(notas*10);

	notas = resto/5.0;
	printf("%d nota(s) de R$ 5.00\n", notas);
	resto = resto-(notas*5);

	notas = resto/2.0;
	printf("%d nota(s) de R$ 2.00\n", notas);
	resto = resto-(notas*2);

	cout << "MOEDAS:" << endl;
	N = resto*100;

	notas = N/100.0;
	printf("%d moeda(s) de R$ 1.00\n", notas);
	resto = N-(notas*100);

	notas = resto/50.0;
	printf("%d moeda(s) de R$ 0.50\n", notas);
	resto = resto-(notas*50);

	notas = resto/25.0;
	printf("%d moeda(s) de R$ 0.25\n", notas);
	resto = resto-(notas*25);

	notas = resto/10.0;
	printf("%d moeda(s) de R$ 0.10\n", notas);
	resto = resto-(notas*10);

	notas = resto/5.0;
	printf("%d moeda(s) de R$ 0.05\n", notas);
	resto = resto-(notas*5);

	notas = resto/1.0;
	printf("%d moeda(s) de R$ 0.01\n", notas);
	resto = resto-(notas*1);


	return 0;
}