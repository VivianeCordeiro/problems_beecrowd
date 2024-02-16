#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, resto;
	cin >> a >> b;

	if(a>b){resto=a%b;}
	else{resto=b%a;}
	
	if(resto==0){cout << "Sao Multiplos"<< endl;}
	else{cout << "Nao sao Multiplos" << endl;}

	return 0;
}