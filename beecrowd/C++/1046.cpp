#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int hInicio, hFim;
	cin >> hInicio >> hFim;
	if(hInicio==hFim){
		cout << "O JOGO DUROU 24 HORA(S)" <<endl;
		return 0;
	}
	if(hInicio>hFim){
		printf("O JOGO DUROU %d HORA(S)\n", 24-hInicio+hFim);
	}
	else{
		printf("O JOGO DUROU %d HORA(S)\n", hFim-hInicio);
	}

	return 0;
}