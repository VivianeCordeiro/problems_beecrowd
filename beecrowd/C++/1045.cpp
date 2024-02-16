#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
	float vet[3];
	cin >> vet[0] >> vet[1] >> vet[2];
	sort(vet, vet+3);
	if(vet[2]>= vet[1]+vet[0]){
		cout << "NAO FORMA TRIANGULO" << endl;
		return 0;
	}
	if(pow(vet[2], 2) == (pow(vet[1],2)+pow(vet[0], 2))){
		cout << "TRIANGULO RETANGULO" << endl;
	}
	if(pow(vet[2], 2) > (pow(vet[1],2)+pow(vet[0], 2))){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	else {
		if(pow(vet[2], 2) < (pow(vet[1],2)+pow(vet[0], 2))){
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
	}
	if(vet[0] == vet[1] & vet[1] == vet[2]){
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	else {
		if(vet[0]==vet[1] || vet[0]==vet[2] || vet[1]==vet[2]){
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	return 0;
}