#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
	int tempo, velocidade;
	double distancia, quantidadeCombustivel;
	cin >> tempo >> velocidade;

	distancia = tempo*velocidade;
	quantidadeCombustivel = distancia / 12;
	
	printf("%.3f\n", quantidadeCombustivel);

 return 0;
}