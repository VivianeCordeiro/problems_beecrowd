#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	float x, y;
	cin >> x >> y;

//condições para cada cada quadrante e para os eixos
	if ((x == 0.0) & (y == 0.0)){
		cout << "Origem" << endl;
	}
	if ((x == 0.0) & (y != 0.0)){
		cout << "Eixo Y" << endl;
	}
	if (y == 0.0 & (x != 0.0)){
		cout << "Eixo X" << endl;
	}
	if(x>0.0 & y>0.0){
		cout << "Q1" << endl;		
	}
	if(x<0.0 & y<0.0){
		cout << "Q3" << endl;		
	}
	if(x>0.0 & y<0.0){
		cout << "Q4" << endl;		
	}
	if(x<0.0 & y>0.0){
		cout << "Q2" << endl;		
	}
	

	return 0;
}
