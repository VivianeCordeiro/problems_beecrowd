#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
	double A, B, C, R1, R2, delta;
	cin >> A >> B >> C;
	delta = (B*B)-(4*A*C);
	if((delta<0) || (A==0)){
		cout << "Impossivel calcular" << endl;
		
	}
	else{
		R1 = (-B+sqrt(delta))/(2*A);
		R2 = (-B-sqrt(delta))/(2*A);
		printf("R1 = %.5f\nR2 = %.5f\n", R1, R2);
	}
	
	return 0;
}