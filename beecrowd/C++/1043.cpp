#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	float a, b, c, area;
	cin >> a >> b >> c;

//quando os lados formam um triangulo
	if((abs(b-c)<a & a < (b+c))||(abs(a-c)<b & b<(a+c)) || (abs(a-b)<c & c<(a+b))){
		printf("Perimetro = %.1f\n", a+b+c);
	}
//calculo e impressão da area do trapézio
	else{
		printf("Area = %.1f\n", (c*(a+b))/2);
	}

	return 0;

}