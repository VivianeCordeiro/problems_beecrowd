#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
	int codigo, quantidade;
	cin >> codigo >> quantidade;
	if (codigo == 1){
		printf("Total: R$ %.2f\n", quantidade*4.0);
	}
	if (codigo == 2){
		printf("Total: R$ %.2f\n", quantidade*4.5);
	}
	if (codigo == 3){
		printf("Total: R$ %.2f\n", quantidade*5.0);
	}
	if (codigo == 4){
		printf("Total: R$ %.2f\n", quantidade*2.0);
	}
	if (codigo == 5){
		printf("Total: R$ %.2f\n", quantidade*1.5);
	}


	return 0;
}	