#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	long int N, notas, resto;
	cin >> N;
	cout << N << endl;

	notas = N/100;
	printf("%d nota(s) de R$ 100,00\n", notas);
	resto = N%100;

	notas = resto/50;
	printf("%d nota(s) de R$ 50,00\n", notas);
	resto = resto%50;

	notas = resto/20;
	printf("%d nota(s) de R$ 20,00\n", notas);
	resto = resto%20;

	notas = resto/10;
	printf("%d nota(s) de R$ 10,00\n", notas);
	resto = resto%10;

	notas = resto/5;
	printf("%d nota(s) de R$ 5,00\n", notas);
	resto = resto%5;

	notas = resto/2;
	printf("%d nota(s) de R$ 2,00\n", notas);
	resto = resto%2;

	notas = resto/1;
	printf("%d nota(s) de R$ 1,00\n", notas);
	
	 

	return 0;
}