#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int N, horas, minutos, segundos;
	cin >> N;
	horas = (N/60)/60;
	minutos = (N-(horas*60*60))/60;
	segundos = (N-(horas*60*60)-(minutos*60));

	printf("%d:%d:%d\n", horas, minutos, segundos);
	

	return 0;
}